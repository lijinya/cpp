#include<stdio.h>
#include<string.h>
class CMyString
{
public:
	CMyString()
	{
		m_pString = NULL;
	}
	CMyString(CMyString & str)
	{
		int nLen = strlen(str.m_pString);
		this->m_pString = new char[nLen + sizeof(char)];
		strcpy(this->m_pString , str.m_pString);
	}
	~CMyString()
	{
		if(m_pString != NULL)
		{
			delete [] m_pString;
			m_pString = NULL;
		}
	}
	void SetString(char * pStr)
	{
		int nLen = strlen(pStr);
		if(m_pString != NULL)
		{
			delete [] m_pString;
			m_pString = NULL;
		}
		m_pString = new char[nLen + sizeof(char)];
		strcpy(m_pString , pStr);
	}
	char * m_pString;
};
void show(CMyString str)
{
	printf(str.m_pString);
}
CMyString GetMyString()
{
	CMyString str;
	str.SetString("HELLO");
	return str;
}
CMyString* GetMyString(CMyString *pMyString)
{
	CMyString str;
	str.SetString("HELLO");
	pMyString = &str;
	return &str;
}
CMyString g_cms1;
CMyString g_cms2;
void main()
{
//	CMyString myString;
//	myString.SetString("Hello");
//	show(myString);
//	show(GetMyString());
	CMyString *pStr = new CMyString[3];
}