#include<stdio.h>
int main(int argc , char *argv[])
{
	int nInt = 0;
	float fFat = 0.0 , fFat2 = 2.0 , fFat3 = 1.0 , fFat4 = 4.9;
//	scanf("%f" , &fFat);
	__asm
	{
		FLD	DWORD PTR SS:[EBP - 8];  
		FLD1	;
		FADD	;
//		FADD ST(1) , ST	;			//fFat += 1.0
		FADD DWORD PTR SS:[EBP - 10h] ;		//fFat + fFat3
		FADD DWORD PTR SS:[EBP - 14h] ;		//fFat + fFat4
		FSTP DWORD PTR SS:[EBP - 14h] ;
	}
//	fFat += 1.0;
//	fFat2 += fFat;
//  fFat4 += fFat3 + fFat2 + 2.5;
	printf("%f\n" , fFat4);
	int &rInt = nInt;
	++rInt;
#define NUM 10
	rInt += NUM;
	const int cInt = 19;
	rInt += cInt;
	rInt = 5 ? 6 : 4 ;
	rInt = 5 ? 4 : 10;
	rInt = rInt >> 2;
	rInt = rInt << 14;
	return 0;
}
