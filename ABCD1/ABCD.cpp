/*
 *	File : ABCD.cpp
 *	Author : lijinya
 *	Date : 2015/5/2
 *	Function : test the multi derive
 *			A
 *		B		C
 *			D
 * */

#include <iostream>
using namespace std;
/*
 *	class Base a
 *	data member is protected
 * */
class A
{
	public:
		A()
		{
			m_nA = 9;
			cout << "A "  << m_nA << endl;
		}
	virtual ~A()
		{
			cout << "~A" << endl;
		}
	public:
		int m_nA;
};

class B : public A
{
	public:
		B()
		{
			m_nB = 10;
			cout << "B " << m_nB << endl;
		}
		virtual ~B()
		{
			cout << "~B" << endl;
		}
	public:
		int	m_nB;
};


class C : public A
{
	public:
		C()
		{
			m_nC = 11;
			cout << "C " << m_nC << endl;
		}
		virtual ~C()
		{
			cout << "~C" << endl;
		}
	public:
		int	m_nC;
};


class D : public B , public C
{
	public:
		D()
		{
			m_nD = 12;
			cout << "D " << m_nD << endl;
		}
		virtual ~D()
		{
			cout << "~D" << endl;
		}
	public:
		int	m_nD;
};

int main(int argc , char *argv[])
{
	A a;
	B b;
	C c;
	D d;
	return 0;
}
