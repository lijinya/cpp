#include<stdio.h>
class CFurniture
{
public:
	CFurniture()
	{
		m_nPrice = 0;
	}
	virtual ~CFurniture()
	{
		printf("virtual ~CFurniture()\n");
	}
	virtual int GetPrice()
	{
		return m_nPrice;
	}
public:
	int m_nPrice;
};
class CSofa : virtual public CFurniture
{
public:
	CSofa()
	{
		m_nPrice = 1;
		m_nColor = 2;
	}
	virtual ~CSofa()
	{
		printf("virtual ~CSofa()\n");
	}
	virtual int GetColor()
	{
		return m_nColor;
	}
	virtual int SitDown()
	{
		return printf("Sit down and rest your legs\n");
	}
	virtual int GetPrice()
	{
		return m_nPrice * 2;
	}
public:
	int m_nColor;
};
class CBed : virtual public CFurniture
{
public:
	CBed()
	{
		m_nPrice = 3;
		m_nLength = 2;
		m_nWidth = 1;
	}
	~CBed()
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
	virtual int GetPrice()
	{
		return m_nPrice * 3;
	}
	
public:
	int m_nLength;
	int m_nWidth;
};
class CSofaBed : public CSofa , public CBed
{
public:
	CSofaBed()
	{
		m_nHeight = 6;
	}
	virtual ~CSofaBed()
	{
		printf("virtual ~CSofaBed\n");
	}
	virtual int SitDown()
	{
		return printf("Sit Down on the sofa bed\n");
	}
	virtual int Sleep()
	{
		return printf("go to sleep on the sofa bed\n");
	}
	virtual int GetHeight()
	{
		return m_nHeight;
	}
	virtual void Show()
	{
		printf("CSofaBed Show()\n");
	}
	virtual int GetPrice()
	{
		return m_nPrice * 4;
	}
	
public:
	int m_nHeight;
};

int main()
{
	CSofaBed SofaBed;
	CFurniture * pFurniture = &SofaBed;
	CSofa * pSofa = &SofaBed;
	CBed * pBed = &SofaBed;
	pFurniture->m_nPrice = 88;
	pSofa->m_nColor = 8;
	pSofa->m_nPrice = 90;
	pBed->m_nLength = 13;
	pBed->m_nWidth = 66;
	pBed->CBed::Sleep();
	pBed->Sleep();
	SofaBed.m_nHeight = 45;
	SofaBed.Show();
	SofaBed.GetPrice();
	return 0;
}