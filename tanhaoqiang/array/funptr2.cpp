#include<stdio.h>

int __cdecl Show(int nShow)
{
	printf("Show : %d\r\n" , nShow);
	return nShow;
}
void main10()
{
	int (__cdecl *pShow) (int) = Show;
	int ret = pShow(7);
	printf("ret = %d\n" , ret);
}