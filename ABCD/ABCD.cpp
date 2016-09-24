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
		
		}
	virtual ~A()
		{
		
		}
	virtual void show()
	{
		m_nA = 99;
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
		}
		virtual ~B()
		{
		
		}
		virtual void show()
		{
			m_nA = 88;
			m_nB = 89;
		}
		virtual void showB()
		{
			m_nB = -88;
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
		
		}
		virtual ~C()
		{
		
		}
		virtual void show()
		{
			m_nA = 78;
			m_nC = 79;
		}
		virtual void showC()
		{
			m_nC = -79;
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
		
		}
		virtual ~D()
		{
			
		}
		virtual void showB()
		{
			m_nB = -66;
		}
		virtual void showC()
		{
			m_nC = -68;
		}
		virtual void show()
		{
			m_nA = 66;
			m_nB = 67;
			m_nC = 78;
			m_nD = 69;
		}
		virtual void showABC()
		{
			m_nA = -61;
			m_nB = -62;
			m_nC = -73;
			m_nD = -64;
		}
		virtual void showD()
		{
			m_nD = -2;
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
	a.show();
	b.show();
	c.show();
	d.show();
	b.showB();
	c.showC();
	d.showB();
	d.showC();
	d.showABC();
	d.showD();
	return 0;
}
