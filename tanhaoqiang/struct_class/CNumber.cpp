#include<stdio.h>

class CNumber
{
public:
	CNumber()
	{
		m_nOne = 1;
		m_nTwo = 2;
	}
	int __stdcall GetNumberOne()
	{
		return m_nOne;
	}
	int GetNumberTwo()
	{
		return m_nTwo;
	}
private:
	int m_nOne;
	int m_nTwo;
};
struct tagTest
{
	char m_cChar;
	double m_dDouble;
	int m_nInt;
	float m_fFloat;
};
int main1()
{
	CNumber number;
	printf("%d\n" , number.GetNumberOne());
	printf("%d\n" , number.GetNumberTwo());
	tagTest tag;
	tag.m_dDouble = 1.0;
	printf("%d\n" , sizeof(tagTest));
	printf("%p\n" , &tag.m_cChar);
	printf("%p\n" , &tag.m_dDouble);
	printf("%p\n" , &tag.m_nInt);
	printf("%p\n" , &tag.m_fFloat);
	return 0;
}