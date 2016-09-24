
#include<Windows.h>
#include<stdio.h>
int main(int argc , char *argv[])
{
	MessageBox(NULL , "Hello World" , "info" , MB_OK);
	int i = 0;
	printf("start");
	i = i + 0x100;
	i = i + 0x111;
	int *p = &i;
	 __asm
	 {
		mov eax , 0x222
		mov ebx , 0x100
		add ebx , ecx
		
		mov ebx , p
		add [ebx] , 0x44332211
		add word ptr [ebx] , 0x44332211
		add dword ptr [ebx] , 0x44332211
		add i , 0x111

	 }
	 BYTE c = 3;
	 WORD w = 4;
	 DWORD dw = 5;
	 __asm
	 {
		add c , 0x87654321
		add w , 0x87654321
		add dw , 0x87654321

	 }
	 printf("");

	DWORD iEax;
	WORD iAx;
	BYTE iAh , iAl;
	printf("\n");
	__asm
	{
		mov eax , 0x87654321
		mov iEax , eax
		mov iAx , ax
		mov iAh , ah
		mov iAl , al
	}
	printf("EAX=%x , AX=%x , AH=%x , AL=%x\n" , iEax , iAx , iAh , iAl);
	return 0;
}