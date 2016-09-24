#include<stdio.h>

class A
{
public:
	void function()
	{
		printf("hello world!\n");
	}
};
class B
{
public:
	virtual void function()
	{
		printf("hello world!\n");
	}
};
int main()
{
	A *pA = NULL;
	pA->function();
	B *pB = NULL;
	B b;
	b.function();
	pB->function();
	return 0;
}