#include<stdio.h>
class CPerson
{
public:
	CPerson()
	{
		ShowSpeak();
	}
	virtual ~CPerson()
	{
		ShowSpeak();
	}
	virtual void ShowSpeak()
	{
		printf("%s::ShowSpeak()\r\n" , GetClassName());
	}
	virtual char * GetClassName()
	{
		return "CPerson";
	}
};

class CChinese : public CPerson
{
public:
	CChinese()
	{
		ShowSpeak();
	}
	virtual ~CChinese()
	{
		ShowSpeak();
	}
//	virtual void ShowSpeak()
//	{
//		printf("Speak Chinese\n");
//	}
	virtual char * GetClassName()
	{
		return "CChinese";
	}
};

class CAmerican : public CPerson
{
public:
	CAmerican()
	{
		ShowSpeak();
	}
	virtual ~CAmerican()
	{
		ShowSpeak();
	}
/*	virtual void ShowSpeak()
	{
		printf("Speak American\n");
	}
*/
	virtual char * GetClassName()
	{
		return "CAmerican";
	}
};
class CGerman : public CPerson
{
public:
	CGerman()
	{
		ShowSpeak();
	}
	virtual ~CGerman()
	{
		ShowSpeak();
	}
/*	virtual void ShowSpeak()
	{
		printf("Speak German\n");
	}
	*/
	virtual char * GetClassName()
	{
		return "CGerman";
	}
};	
void speak(CPerson *pPerson)
{
	pPerson->ShowSpeak();
}
int main4()
{
	CChinese Chinese;
	CAmerican American;
	CGerman German;
//	speak(&Chinese);
//	speak(&American);
//	speak(&German);
	return 0;
}