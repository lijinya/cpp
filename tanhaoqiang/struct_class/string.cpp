#include<stdio.h>
#include<string.h>

class CMyString
{
public:
	CMyString()
	{
		m_pString = new char[10];
		if(NULL == m_pString)
		{
			return ;
		}
		strcpy(m_pString , "Hello");
	}
	~CMyString()
	{
		if(m_pString != NULL)
		{
			delete [] m_pString;
			m_pString = NULL;
		}
	}
	char * GetString()
	{
		return m_pString;
	}
private:
	char *m_pString;
};

void ShowMyString(CMyString str)
{
	printf("%s\n" , str.GetString());
}
int main5()
{
	CMyString str;
	ShowMyString(str);	//
	return 0;
}