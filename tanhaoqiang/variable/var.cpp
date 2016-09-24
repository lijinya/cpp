#include<stdio.h>

int g_VariableType = 117713190;
int g_VariableType2 = 117713191;


void main1()
{
	int nOne = 1;
	int nTwo = 2;
	scanf("%d%d" , &nOne , &nTwo);
	scanf("%d%d" , &g_VariableType , &g_VariableType2);
	printf("%d %d\r\n" , nOne , nTwo);
	printf("%d %d\r\n" , g_VariableType , g_VariableType2);
}