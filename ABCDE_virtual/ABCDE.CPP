
#include <stdio.h>

class A
{
public:
	int m_nA;
	A(int a )
	{
		m_nA = a;
	}
	virtual ~A(){}
	virtual void show()
	{
		printf("A::show()\n");	
	}
};

class B : virtual public A
{
public:
	int m_nB;
	B(int a = 10 , int b = 11):A(a) , m_nB(b)
	{}
	~B(){}
	void show()
	{
		printf("B::show()\n");
	}
	virtual void showB()
	{
		printf("B::showVB()\n");
	}
};

class C : virtual public A
{
public:
	int m_nC;
	C(int a = 12, int c = 13):A(a) , m_nC(c)
	{}
	~C(){}
	void show()
	{
		printf("C::show()\n");
	}
	virtual void showC()
	{
		printf("C::showC()\n");
	}
};

class D : public A
{
public:
	int m_nD;
	D(int a = 14 , int d = 15):A(a) , m_nD(d)
	{}
	~D(){}
	void show()
	{
		printf("D::show()\n");
	}
	virtual void showD()
	{
		printf("D::shhowD()\n");
	}
};

class E : public B , C , D
{
public:
	int m_nE;
	E(int a = 16 , int b = 17 , int c = 18 , int d = 19 , int e = 20) : A(a) ,  B(a , b) , C(a , c) , D(a , d)
	{
		m_nE = e;
	}
	~E(){}
	void show()
	{
		printf("E::show()\n");
	}
	void showB()
	{
		printf("E::showB()\n");
	}
	void showC()
	{
		printf("E::showC()\n");
	}
	void showD()
	{
		printf("E::showD()\n");
	}
	virtual void showE()
	{
		printf("E::showE()\n");
	}
};

int main()
{
	E e(1 , 2 , 3 , 4 , 5);
	e.m_nB = 99;
	e.m_nC = 98;
	return 0;
}