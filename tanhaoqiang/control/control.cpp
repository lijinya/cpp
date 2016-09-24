#include<stdio.h>

int main(int argc , char *argv[])
{
	int nInt = 9;
//	if(0 == nInt)
	__asm
	{
		cmp DWORD PTR [EBP - 4h] , 0 ;
		jle __exit;
	}
//	__asm
	{
		printf("%d\n" , nInt);
/*		push DWORD PTR [EBP - 4h];
		push offset string "%d\n";
		call printf ;
		add esp , 8h ; */
	}
/*	if(nInt > 9)
	{
		printf("%d>9\n" , nInt);
	}
	else if(9 == nInt)
	{
		printf("nInt = 9\n");
	}
	else if(8 == nInt)
	{
		printf("nInt = 8\n");
	}
*/
	switch(nInt)
	{
	case 8 :
		nInt += 1; 
		break;
	case 9 :
		nInt -= 9;
		break;
	default :
		nInt -= 1;
		break;
	}
	switch(nInt = scanf("%d" , &nInt))
	{
	case 1:
		printf("nInt = 1\n");
		break;
	case 2:
		printf("nInt = 2\n");
		break;
	case 3:
		printf("nInt = 3\n");
		break;
	case 5:
		printf("nInt = 5\n");
		break;
	case 6:
		printf("nInt = 6\n");
		break;
	case 7:
		printf("nInt = 7\n");
		break;
	case 100:
		printf("nInt = 100\n");
		break;
	case 400:
		printf("nInt = 400\n");
		break;
	case 500:
		printf("nInt = 500\n");
		break;
	default:
		break;
	}
	/*
		0040D76D   lea         edx,[ebp-4]
0040D770   push        edx
0040D771   push        offset string "%d" (0042201c)
0040D776   call        scanf (0040fa20)
0040D77B   add         esp,8
0040D77E   mov         dword ptr [ebp-4],eax
0040D781   mov         eax,dword ptr [ebp-4]
0040D784   mov         dword ptr [ebp-0Ch],eax
0040D787   mov         ecx,dword ptr [ebp-0Ch]
0040D78A   sub         ecx,1	// case table index 0->max-1
0040D78D   mov         dword ptr [ebp-0Ch],ecx
0040D790   cmp         dword ptr [ebp-0Ch],6	//maxIndex
0040D794   ja          __exit (0040d7f8)
0040D796   mov         edx,dword ptr [ebp-0Ch]
0040D799   jmp         dword ptr [edx*4+40D80Bh]	//case table
47:       case 1:
48:           printf("nInt = 1\n");
0040D7A0   push        offset string "nInt = 1\n" (00422fe0)
0040D7A5   call        printf (00401070)
0040D7AA   add         esp,4
49:           break;
0040D7AD   jmp         __exit (0040d7f8)
50:       case 2:
51:           printf("nInt = 2\n");
0040D7AF   push        offset string "nInt = 2\n" (00422fd4)
0040D7B4   call        printf (00401070)
0040D7B9   add         esp,4
52:           break;
0040D7BC   jmp         __exit (0040d7f8)
53:       case 3:
54:           printf("nInt = 3\n");
0040D7BE   push        offset string "nInt = 3\n" (00422fc8)
0040D7C3   call        printf (00401070)
0040D7C8   add         esp,4
55:           break;
0040D7CB   jmp         __exit (0040d7f8)
56:       case 5:
57:           printf("nInt = 5\n");
0040D7CD   push        offset string "nInt = 5\n" (00422fbc)
0040D7D2   call        printf (00401070)
0040D7D7   add         esp,4
58:           break;
0040D7DA   jmp         __exit (0040d7f8)
59:       case 6:
60:           printf("nInt = 6\n");
0040D7DC   push        offset string "nInt = 6\n" (00422fb0)
0040D7E1   call        printf (00401070)
0040D7E6   add         esp,4
61:           break;
0040D7E9   jmp         __exit (0040d7f8)
62:       case 7:
63:           printf("nInt = 7\n");
0040D7EB   push        offset string "nInt = 7\n" (00422fa4)
0040D7F0   call        printf (00401070)
0040D7F5   add         esp,4
64:           break;
65:       default:
66:           break;
67:       }
68:   __exit:
69:       return 0;
0040D7F8   xor         eax,eax


  0040FAED   lea         edx,[ebp-4]
0040FAF0   push        edx
0040FAF1   push        offset string "%d" (0042201c)
0040FAF6   call        scanf (0040fa20)
0040FAFB   add         esp,8
0040FAFE   mov         dword ptr [ebp-4],eax
0040FB01   mov         eax,dword ptr [ebp-4]
0040FB04   mov         dword ptr [ebp-0Ch],eax
0040FB07   cmp         dword ptr [ebp-0Ch],64h
0040FB0B   jg          main+0B4h (0040fb34)
0040FB0D   cmp         dword ptr [ebp-0Ch],64h		#100
0040FB11   je          $L554+0Fh (0040fba5)
0040FB17   mov         ecx,dword ptr [ebp-0Ch]
0040FB1A   sub         ecx,1						#index
0040FB1D   mov         dword ptr [ebp-0Ch],ecx
0040FB20   cmp         dword ptr [ebp-0Ch],6		#maxIndex
0040FB24   ja          __exit (0040fbd0)		
0040FB2A   mov         edx,dword ptr [ebp-0Ch]
0040FB2D   jmp         dword ptr [edx*4+40FBE3h]
0040FB34   cmp         dword ptr [ebp-0Ch],190h		#400
0040FB3B   je          $L554+1Eh (0040fbb4)
0040FB3D   cmp         dword ptr [ebp-0Ch],1F4h		#500
0040FB44   je          $L554+2Dh (0040fbc3)
0040FB46   jmp         __exit (0040fbd0)

	*/
	switch(nInt)
	{
		case 2:
			printf("nInt = 2\n");
			break;
		case 3:
			printf("nInt = 3\n");
			break;
		case 8:
			printf("nInt = 8\n");
			break;
		case 10:
			printf("nInt = 10\n");
			break;
		case 35:
			printf("nInt = 35\n");
			break;
		case 37:
			printf("nInt = 37\n");
			break;
		case 666:
			printf("nInt = 666\n");
			break;
	}
	/*
		0040FBD0   mov         eax,dword ptr [ebp-4]		nInt -> eax
		0040FBD3   mov         dword ptr [ebp-10h],eax
		0040FBD6   cmp         dword ptr [ebp-10h],0Ah		> 10
		0040FBDA   jg          $L554+60h (0040fbf6)
		0040FBDC   cmp         dword ptr [ebp-10h],0Ah		= 10
		0040FBE0   je          $L554+0A4h (0040fc3a)
		0040FBE2   cmp         dword ptr [ebp-10h],2
		0040FBE6   je          $L554+77h (0040fc0d)			= 2 
		0040FBE8   cmp         dword ptr [ebp-10h],3		= 3
		0040FBEC   je          $L554+86h (0040fc1c)
		0040FBEE   cmp         dword ptr [ebp-10h],8		
		0040FBF2   je          $L554+95h (0040fc2b)			=8
		0040FBF4   jmp         __exit (0040fc74)			¶þ²æÊ÷ÓÒÖ¦
		0040FBF6   cmp         dword ptr [ebp-10h],23h		= 35
		0040FBFA   je          $L554+0B3h (0040fc49)
		0040FBFC   cmp         dword ptr [ebp-10h],25h		= 37
		0040FC00   je          $L554+0C2h (0040fc58)
		0040FC02   cmp         dword ptr [ebp-10h],29Ah		= 666
		0040FC09   je          $L554+0D1h (0040fc67)
		0040FC0B   jmp         __exit (0040fc74)			×óÖ¦½áÊø

	*/

__exit:
	return 0;
}