#include<stdio.h>

class CInit
{
public:
	void SetNumber(int nNumber)
	{
		this->m_nNumber = nNumber;
	}
	int GetNumber()
	{
		return this->m_nNumber;
	}
	int m_nNumber;
};

int main3()
{
	CInit Init;
	Init.SetNumber(9);
	printf("%d\n" , Init.GetNumber());
	return 0;
}