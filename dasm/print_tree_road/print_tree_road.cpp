/*
 *	File : print binary tree road between leaf A and leaf B
 *	Date : 2015/8/2
 *	Author : jinya
 *	Assert A --> B
 *	traverse root , left , right ; left , root , right ; left , right , root;
 *	so left is always before right  
 *	左边叶子节点遍历总是优先于右边叶子节点
 * */

#include <iostream>
using namespace std;

#include <vector>
/*
 *	use three pointer tree  to memory parent 
 * */
typedef struct Node
{
	int data;
	struct Node * lchild;
	struct Node * rchild;
	struct Node * parent;
}*pNode;

class Tree
{
	public:
		Node * pRoot;
		vector <pNode> vectpNode;
	public:
		Tree();
		Tree(pNode pRoot);
		void create();
		void create(pNode &root);
		void create(pNode &root , pNode parent);
		void travel_leaf();
		void travel_leaf(pNode root);
		int find(int num);
		void print_tree_road();
};
Tree::Tree()
{
	pRoot = NULL;
//	pRoot->parent = NULL;
//	pRoot->lchild = NULL;
//	pRoot->rchild = NULL;
//	pRoot->data = 0;
//	vectpNode = NULL;
}
Tree::Tree(pNode pRoot)
{
	this->pRoot = pRoot;
	this->pRoot->parent = NULL;
	this->pRoot->lchild = NULL;
	this->pRoot->rchild = NULL;
	this->pRoot->data = 0;
//	vectpNode = NULL;
}
void Tree::create()
{
	create(pRoot);
}
void Tree::create(pNode &root)
{
	create(root , NULL);
}
void Tree::create(pNode &root , pNode parent)
{
	int d = 0;
	cin >> d;
	if(d)
	{
		root = new Node();
		root->data = d;
		root->parent = parent;
		root->lchild = NULL;
		root->rchild = NULL;
		create(root->lchild , root);
		create(root->rchild , root);
	}
	else
	{
		root = NULL;
	}
}
void Tree::travel_leaf()
{
	travel_leaf(pRoot);
}
void Tree::travel_leaf(pNode root)
{
	if(root)
	{
		cout << root->data << " ";
		/*
			如果是叶子节点加入vector
		*/
		if(!root->lchild && !root->rchild)
		{
			vectpNode.insert(vectpNode.end() , root);
		}
		travel_leaf(root->lchild);
		travel_leaf(root->rchild);
	}	
}
int Tree::find(int num)
{
	for(int i = 0; i < vectpNode.size(); ++i)
	{
		if(vectpNode[i]->data == num)
		{
			return i;
		}
	}
	return -1;
}
void Tree::print_tree_road()
{
	cout << "所有叶子节点 : ";
	for(int j = 0; j < vectpNode.size(); ++j)
	{
		cout << vectpNode[j]->data << " ";
	}
	cout << endl << "--------请输入两个整数(必须是叶子节点):" << endl;

	int nleaf;
	cin >> nleaf;
	int nStart = find(nleaf);
	cin >> nleaf;
	int nEnd = find(nleaf);
	if(-1 == nStart)
	{
		nStart = 0;
	}
	if(-1 == nEnd)
	{
		nEnd = vectpNode.size();
	}
	for(int i = nStart; i < vectpNode.size() && i <= nEnd; ++i)
	{
	//	cout << vectpNode[i]->data << " ";
		pNode pCur = vectpNode[i];
		while(pCur)
		{
			if(!pCur->parent)
			{
				cout << pCur->data;
				break;
			}
			cout << pCur->data << "<--";
			pCur = pCur->parent;
		}
		cout << endl;
	}
	cout << endl;
}
int main()
{
	Tree tree;
	tree.create();
	tree.travel_leaf();
	tree.print_tree_road();
//	vector <int> a;
//	a.insert(a.end() , 9);
//	cout << *(a.end() - 1);
	return 0;
}
