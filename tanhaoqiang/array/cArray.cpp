#include<stdio.h>

int main7()
{
	char cArray[3][256] = {
		"Hello World\r\n" ,
		"This is a test\r\n" ,
		"This is the end line!\r\n"
	};
	printf(cArray[1]);
	return 0;
}