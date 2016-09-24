#include<stdio.h>

int g_nArray[5] = {1 , 2 , 3 , 4 , 5};
int main2()
{
	int *pInt = g_nArray;
	do
	{
		printf("%d \n" , *pInt);
		++pInt;
	}while(pInt < g_nArray + 5);
	return 0;
}