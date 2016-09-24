#include<stdio.h>
#include<string.h>
class CFunTest
{
public:
	int m_nOne;
	int m_nTwo;
	char m_szName[32];
};
void ShowFuncTest(CFunTest fun)
{
	printf("m_nOne = %d , m_nTwo = %d , m_szName = %s\n" , fun.m_nOne , fun.m_nTwo , fun.m_szName);
}
void main4()
{
	CFunTest fun;
	fun.m_nOne = 9;
	fun.m_nTwo = 99;
	strcpy(fun.m_szName , "NAME");
	ShowFuncTest(fun);
}