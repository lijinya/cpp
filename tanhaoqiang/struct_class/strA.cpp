#include<stdio.h>

struct A
{
	int m_nInt;
	float m_fFloat;
};

int main2()
{
	A a;
	A *pA = &a;
	printf("%p\n" , pA);
	printf("%p\n" , &pA->m_fFloat);
	printf("%p\n" , &((A*) NULL)->m_fFloat);	//4    <==> pA->m_fFloat
	return 0;
}