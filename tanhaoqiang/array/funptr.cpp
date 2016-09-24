#include<stdio.h>

void __cdecl Show()
{
	printf("Show\r\n");
}
void main9()
{
	void (__cdecl *pShow) (void) = Show;
	pShow();
	Show();
}