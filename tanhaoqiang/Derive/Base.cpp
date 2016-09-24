#include<stdio.h>

class CBase
{
public:
	CBase()
	{
		printf("CBase\n");
	}
	~CBase()
	{
		printf("~CBase\n");
	}
	void SetNumber(int nInt)
	{
		this->m_nNumber = nInt;
	}
	int GetNumber()
	{
		return this->m_nNumber;
	}
private:
	int m_nNumber;
};

class CDerive : public CBase
{
public:
	void ShowNumber(int nNumber)
	{
		SetNumber(nNumber);
		m_nDerive = nNumber + 1;
		printf("%d\n" , GetNumber());
		printf("%d\n" , m_nDerive);
	}
public:
	int m_nDerive;
};

int main1(int argc , char *argv[])
{
	CDerive derive;
	derive.ShowNumber(argc);
	return 0;
}
int main3()
{
	int nTest = 0x87654321;
	CBase base;
	CDerive *pDerive = (CDerive *)(&base);
	printf("%x\n" , pDerive->m_nDerive);
	return 0;
}