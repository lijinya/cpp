#include<stdio.h>

class CReturn 
{
public:
	int m_nNumber;
	int m_nArray[10];
};
CReturn GetReturn()
{
	CReturn ret;
	ret.m_nNumber = 0;
	for(int i = 0; i < 10; ++i)
	{
		ret.m_nArray[i] = i + 1;
	}
	return ret;
}
void main()
{
	CReturn objA;
	objA = GetReturn();
	printf("%d %d %d\n" , objA.m_nNumber , objA.m_nArray[0] , objA.m_nArray[9]);
	
}
