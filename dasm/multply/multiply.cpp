/*
 *	File : multiply.cpp
 *	Author : lijinya
 *	Date : 2015/7/26
 *	Function : multiply two big integer
 * */

#include <iostream>
using namespace std;

#include <cmath>
#include <vector>
void rshow(vector <int> c);

void show(vector <int> c)
{
	cout << "**********" << endl;
	for(int i = 0; i < c.size(); ++i)
	{
		cout << c[i] << ' ';
	}
	cout << endl;
	cout << "**********" << endl;
}
void normalize(vector <int> &num)
{
	num.push_back(0);
	show(num);
	for(int i = 0; i < num.size(); ++i)
	{
		if(num[i] < 0)
		{
			int borrow = (abs(num[i]) + 9) / 10;
			num[i + 1] -= borrow;
			num[i] += borrow * 10;
		}
		else
		{
			num[i + 1] += num[i] / 10;
			num[i] %= 10;
		}
		show(num);
	}
	cout << "before pop while" << endl;
	while(num.size() > 1 && 0 == num.back())
	{
		num.pop_back();
		show(num);
	}
	cout << "after pop while" << endl;
	show(num);
}
vector <int> multiply(vector <int> &a , vector <int> &b)
{
	vector <int> c (a.size() + b.size() + 1 , 0);
	cout << "init...." << endl;
	rshow(c);
	for(int i = 0; i < a.size(); ++i)
	{
		for(int j = 0; j < b.size(); ++j)
		{
			c[i + j] += a[i] * b[j];
		}
	}
	cout << "after multiply ...." << endl;
	rshow(c);
	normalize(c);
	cout << "after normalize ...." << endl;
	rshow(c);
	return c;
}
void rshow(vector <int> c)
{
	cout << "----------" << endl;
	for(vector <int> :: iterator it = c.end() - 1; it != c.begin(); --it)
	{
		cout << *it << ' ';
	}
	cout << c.front();
	cout << endl;
	cout << "----------" << endl;
}
int main()
{
	vector <int> a;
	vector <int> b;
	a.push_back(4);
	a.push_back(3);
	a.push_back(2);
	a.push_back(1);
	b.push_back(8);
	b.push_back(7);
	b.push_back(6);
	b.push_back(5);
	vector <int> c = multiply(a , b);
	show(c);
	return 0;
}
