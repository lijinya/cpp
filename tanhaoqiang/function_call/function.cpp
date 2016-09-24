#include<stdio.h>

void _stdcall ShowStd(int nNumber)
{
	printf("%d \r\n" , nNumber);
}
void _cdecl ShowCde(int nNumber)
{
	printf("%d \r\n" , nNumber);
}
void   repeat()
{
	printf("hello\n");
	printf("c++\n");
	printf("functin\n");
	printf("call\n");
}
void __fastcall ShowFast(int nOne , int nTwo , int nThree , int nFour)
{
	printf("%d %d %d %d\r\n" , nOne , nTwo , nThree , nFour);
}
int getAddr(int nNumber)
{
	int nAddr = *(int *)(&nNumber - 1);
	return nAddr;
}
float getF(float fFat)
{
	return fFat * fFat + 1.0;
}
double getD(double fFat)
{
	return fFat * fFat + 1.0;
}
struct _tagTest
{
	int m_nInt;
	char m_cCh;
	float m_fFat;
};
_tagTest getT()
{
	_tagTest t;
	t.m_cCh = 't';
	t.m_fFat = 1.0;
	t.m_nInt = 1;
	return t;
}
void main()
{
	ShowStd(5);
	ShowCde(5);
	repeat();
	ShowFast(1 , 2 , 3 , 4);
	printf("addr = %d\n" , getAddr(5));
	printf("fFat ^ 2 + 1 = %f\n" , getF(2.5));
	printf("fFat ^ 2 + 1 = %f\n" , getD(2.5));
	getT();
}