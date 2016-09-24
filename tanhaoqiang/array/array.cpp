#include<string.h>
void Show(char szBuf[])
{
	strcpy(szBuf , "Hello World");
}

char* RetArray()
{
	char szBuff[] = {"Hello World"};
	return szBuff;
}
void main1()
{
	int nArray[5] = {1 , 2 , 3 , 4 , 5};
/*	int nOne = 1;
	int nwo = 2;
	int nThree = 3;
	int nFour = 4;
	int nFive = 5;
	*/
	char cChar = 'A';
	float fFloat = 1.0f;
	short sShort = 1;
	int nInt = 2;
	double dDouble = 2.0f;
	char szHello[] = "Hello World";
	char szHell[] = "Hello Worl";
	char szHello1[] = "Hello World";
	char szHelloB[20] = {0};
	Show(szHelloB);
	RetArray();
}