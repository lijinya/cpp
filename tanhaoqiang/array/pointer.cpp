#include<stdio.h>

int main4()
{
	int nIndex = 1;
	int nArray[9] = {1 , 2 , 3 , 0};
	int *pInt = nArray;
	printf("%d\n" , nArray[-1]);
	printf("%d\n" , nArray[nIndex]);
	printf("%d\n" , pInt[nIndex - 2]);
	return 0;
}