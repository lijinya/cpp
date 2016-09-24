#include<stdio.h>

int main3()
{
	int nOne , nTwo;
	scanf("%d%d" , &nOne , &nTwo);
	static int g_snArray[5] = {nOne , nTwo , 0};
	return 0;
}