#include<stdio.h>
int main()
{
	printf("start\n");
	fflush(stdout);
	char i=0x778899AA;
	char *p=&i;
	/*
	00401014  |.  C745 F8 AA998>MOV DWORD PTR SS:[EBP-8],778899AA        ;  i=0x778899AA
	0040101B  |.  8D45 F8       LEA EAX,DWORD PTR SS:[EBP-8]             ;  EAX=&i;
	0040101E  |.  8945 FC       MOV DWORD PTR SS:[EBP-4],EAX             ;  p=EAX=&i;
    */
	__asm
	{
	mov i,0; //0040101F  |.  C645 FB 00    MOV BYTE PTR SS:[EBP-5],0
    lea ebx,i //00401023  |.  8D5D FB       LEA EBX,DWORD PTR SS:[EBP-5]             ;  ebx=ebp-5
	mov [ebx],0x1111222a

	

	}
	getchar();
	printf("end\n");
	return 0;
	return 0;
}