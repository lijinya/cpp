#include<stdio.h>
/*
class CSoft
{
public:
	CSoft()
	{
		m_nColor = 2;
	}
	virtual ~CSoft()
	{
		printf("virtual ~CSoft()\n");
	}
	virtual int GetColor()
	{
		return m_nColor;
	}
	virtual int SitDown()
	{
		return printf("Sit down and rest your legs!\n");
	}
protected:
	int m_nColor;
};
class CBed
{
public:
	CBed()
	{
		m_nLength = 4;
		m_nWidth = 5;
	}
	virtual ~CBed()
	{
		printf("virtual ~CBed()\n");
	}
	virtual int GetArea()
	{
		return m_nLength * m_nWidth;
	}
	virtual int Sleep()
	{
		return printf("go to sleep!\n");
	}
protected:
	int m_nLength;
	int m_nWidth;
};
class CSoftBed : public CSoft , public CBed
{
public:
	CSoftBed()
	{
		m_nHeight = 6;
	}
	virtual ~CSoftBed()
	{
		printf("virtual ~CSoftBed()\n");
	}
	virtual SitDown()
	{
		return printf("sit down on the soft bed\n");
	}
	virtual int Sleep()
	{
		return printf("go to sleep on the sofa bed\n");
	}
	virtual int GetHeight()
	{
		return m_nHeight;
	}
protected:
	int m_nHeight;
};	
int main5()
{
	CSoftBed softBed;
	CSoft *pSoft = &softBed;
	CBed *pBed = &softBed;
	pSoft->SitDown();
	pBed->Sleep();
	printf("Color = %d\n" , pSoft->GetColor());
	printf("area = %d\n" , pBed->GetArea());
	return 0;
}

  */