#include<stdio.h>

int main8(int argc , char *argv[] , char **envp)
{
	for(int i = 0; i < argc; ++i)
	{
		printf(argv[i]);
	}
	return 0;
}