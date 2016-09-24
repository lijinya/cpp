#include<stdio.h>

class CGlobal
{
public:
	CGlobal()
	{
		printf("CGlobal\r\n");
	}
	CGlobal(int nInt)
	{
		printf("CGlobal(int nInt) %d\r\n" , nInt);
	}
	CGlobal(char *pChar)
	{
		printf("CGlobal(char *pChar) %s\r\n" , pChar);
	}
	virtual ~CGlobal()
	{
		printf("~CGlobal()\r\n");
	}
	void show()
	{
		printf("head address %p\n" , this);
	}
};

CGlobal g_Global_void;
CGlobal g_Global_int(10);
CGlobal g_Global_char("hello c++");

int main()
{
	g_Global_void.show();
	g_Global_int.show();
	g_Global_char.show();
	return 0;
}