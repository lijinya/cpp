#include<stdio.h>

int GoToDo(int nCount)
{
	int nSum = 0;
	int nIndex = 0;
GOTO_DO:
	nSum += nIndex;
	nIndex++;
	if(nIndex <= nCount)
	{
		goto GOTO_DO;
	}
	return nSum;
}
/*
3:    int GoToDo(int nCount)
4:    {
00401020   push        ebp
00401021   mov         ebp,esp
00401023   sub         esp,48h
00401026   push        ebx
00401027   push        esi
00401028   push        edi
00401029   lea         edi,[ebp-48h]
0040102C   mov         ecx,12h
00401031   mov         eax,0CCCCCCCCh
00401036   rep stos    dword ptr [edi]
5:        int nSum = 0;
00401038   mov         dword ptr [ebp-4],0
6:        int nIndex = 0;
0040103F   mov         dword ptr [ebp-8],0
7:    GOTO_DO:
8:        nSum += nIndex;
00401046   mov         eax,dword ptr [ebp-4]
00401049   add         eax,dword ptr [ebp-8]
0040104C   mov         dword ptr [ebp-4],eax
9:        nIndex++;
0040104F   mov         ecx,dword ptr [ebp-8]
00401052   add         ecx,1
00401055   mov         dword ptr [ebp-8],ecx
10:       if(nIndex <= nCount)
00401058   mov         edx,dword ptr [ebp-8]
0040105B   cmp         edx,dword ptr [ebp+8]
0040105E   jg          GOTO_DO+1Ch (00401062)
11:       {
12:           goto GOTO_DO;
00401060   jmp         GOTO_DO (00401046)
13:       }
14:       return nSum;
00401062   mov         eax,dword ptr [ebp-4]
15:   }
00401065   pop         edi
00401066   pop         esi
00401067   pop         ebx
00401068   mov         esp,ebp
0040106A   pop         ebp
0040106B   ret

*/
int LoopDo(int nCount)
{
	int nSum = 0;
	int nIndex = 0;
	do
	{
		nSum += nIndex;
		nIndex++;
	}while(nIndex <= nCount);
	return nSum;
}
/*
61:   int LoopDo(int nCount)
62:   {
0040D460   push        ebp
0040D461   mov         ebp,esp
0040D463   sub         esp,48h
0040D466   push        ebx
0040D467   push        esi
0040D468   push        edi
0040D469   lea         edi,[ebp-48h]
0040D46C   mov         ecx,12h
0040D471   mov         eax,0CCCCCCCCh
0040D476   rep stos    dword ptr [edi]
63:       int nSum = 0;
0040D478   mov         dword ptr [ebp-4],0
64:       int nIndex = 0;
0040D47F   mov         dword ptr [ebp-8],0
65:       do
66:       {
67:           nSum += nIndex;
0040D486   mov         eax,dword ptr [ebp-4]
0040D489   add         eax,dword ptr [ebp-8]
0040D48C   mov         dword ptr [ebp-4],eax
68:           nIndex++;
0040D48F   mov         ecx,dword ptr [ebp-8]
0040D492   add         ecx,1
0040D495   mov         dword ptr [ebp-8],ecx
69:       }while(nIndex <= nCount);
0040D498   mov         edx,dword ptr [ebp-8]
0040D49B   cmp         edx,dword ptr [ebp+8]
0040D49E   jle         LoopDo+26h (0040d486)
70:       return nSum;
0040D4A0   mov         eax,dword ptr [ebp-4]
71:   }
0040D4A3   pop         edi
0040D4A4   pop         esi
0040D4A5   pop         ebx
0040D4A6   mov         esp,ebp
0040D4A8   pop         ebp
0040D4A9   ret

*/
int LoopFor(int nCount)
{
//	int nSum = 0;
//	for(int nIndex = 0; nIndex <= nCount; ++nIndex)
//	{
//		nSum += nIndex;
//	}
//	return nSum;
	__asm
	{
		push ebp;
		mov ebp , esp;
		
		push ebx;
		push edi;
		push esi;
		mov edi , DWORD PTR [ebp + 8h];
		sub esp , 48h;
		mov DWORD PTR [EBP - 4h] , 0;
		mov DWORD PTR [EBP - 8h] , 0;
		mov ebx , 1;
	
		
loop_:
	
		cmp	DWORD PTR [EBP - 8h] , edi ;
		jg	end;
		mov esi , DWORD PTR [EBP - 8h];
		ADD	DWORD PTR [EBP - 4h] , esi;
	
		ADD	DWORD PTR [EBP - 8h] , ebx;
		jmp loop_;
end:
		mov eax , DWORD PTR [EBP - 4h] ;
		mov esp , ebp;
//		add esp , 48h;
		pop esi;
		pop edi;
		pop ebx;
		pop ebp	;
		ret;
//		add esp , 4;
	}
}
/*
114:  int LoopFor(int nCount)
115:  {
0040D4F0   push        ebp
0040D4F1   mov         ebp,esp
0040D4F3   sub         esp,48h
0040D4F6   push        ebx
0040D4F7   push        esi
0040D4F8   push        edi
0040D4F9   lea         edi,[ebp-48h]
0040D4FC   mov         ecx,12h
0040D501   mov         eax,0CCCCCCCCh
0040D506   rep stos    dword ptr [edi]
116:      int nSum = 0;
0040D508   mov         dword ptr [ebp-4],0
117:      for(int nIndex = 0; nIndex <= nCount; ++nIndex)
0040D50F   mov         dword ptr [ebp-8],0
0040D516   jmp         LoopFor+31h (0040d521)	#
0040D518   mov         eax,dword ptr [ebp-8]
0040D51B   add         eax,1
0040D51E   mov         dword ptr [ebp-8],eax
0040D521   mov         ecx,dword ptr [ebp-8]
0040D524   cmp         ecx,dword ptr [ebp+8]
0040D527   jg          LoopFor+44h (0040d534)
118:      {
119:          nSum += nIndex;
0040D529   mov         edx,dword ptr [ebp-4]
0040D52C   add         edx,dword ptr [ebp-8]
0040D52F   mov         dword ptr [ebp-4],edx
120:      }
0040D532   jmp         LoopFor+28h (0040d518)
121:      return nSum;
0040D534   mov         eax,dword ptr [ebp-4]
122:  }
0040D537   pop         edi
0040D538   pop         esi
0040D539   pop         ebx
0040D53A   mov         esp,ebp
0040D53C   pop         ebp
0040D53D   ret

*/
int main()
{
	int nSum = LoopDo(9);
	nSum = LoopFor(8);
	return 0;	
}