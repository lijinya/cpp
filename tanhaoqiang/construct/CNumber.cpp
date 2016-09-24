#include<stdio.h>
class CNumber
{
public:
	CNumber()
	{
		m_nNumber = 1;
	}
	int m_nNumber;
};

void main1()
{
	CNumber *pNumber = NULL;
	pNumber = new CNumber;
	pNumber->m_nNumber = 3;
	printf("%d \r\n" , pNumber->m_nNumber);
}