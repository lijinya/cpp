#include<stdio.h>

class CVirtual
{
public:
	virtual int GetNumber()
	{
		return m_nNumber;
	}
	virtual void setNumber(int nNumber)
	{
		m_nNumber = nNumber;
	}
	~CVirtual()
	{
		printf("~CVirtual\r\n");
	}
private:
	int m_nNumber;
};

void main1()
{

	CVirtual Virtual;
	Virtual.setNumber(9);
	Virtual.GetNumber();
}