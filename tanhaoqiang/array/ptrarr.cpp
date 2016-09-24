#include<stdio.h>
#include<string.h>

int main6()
{
	char *pBuff[3] = {
		"Hello" ,
		"World" ,
		"!\r\n"
	};
	for(int i = 0; i < 3; ++i)
	{
		printf(pBuff[i]);
	}
	return 0;
}