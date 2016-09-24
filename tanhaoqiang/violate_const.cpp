#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	const int a = 1;
	int* b = (int*)&a;
	*b = 2;
	cout << a << endl << *b << endl;
	b = new int(8);
	cout << a << endl << *b << endl;
	return 0;
}