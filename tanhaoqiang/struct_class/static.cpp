#include<stdio.h>

class CStatic
{
public:
	void ShowNumber();
	int m_nInt;
	static int m_snInt;
};
void CStatic :: ShowNumber()
{
	printf("m_nInt = %d , m_snInt = %d\n" , m_nInt , m_snInt);
}
int CStatic::m_snInt = 9;
int main3()
{
	CStatic sta;
	sta.m_nInt = 2;
	sta.ShowNumber();
	return 0;
}