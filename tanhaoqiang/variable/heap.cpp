#include<stdlib.h>
#include<stdio.h>
int main()
{
	char *pCharMalloc = (char *)malloc(40);
	char *pCharNew = new char[255];

	if(pCharNew != NULL)
	{
		printf("size = %d\n" , *(int*)(pCharNew - 0x10));
		delete [] pCharNew;
		pCharNew = NULL;
	}

	if(pCharMalloc != NULL)
	{
		printf("size = %d\n" , *(int*)(pCharMalloc - 0x10));
		free(pCharMalloc);
		pCharMalloc = NULL;
	}
	return 0;
}