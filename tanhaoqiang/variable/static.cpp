#include<stdio.h>
void ShowStatic(int nNumber)
{
	static int g_snNumber = nNumber;
	printf("%d \r\n" , g_snNumber);
}
void main2()
{
	for(int i = 0; i < 5; ++i)
	{
		ShowStatic(i);
	}
}