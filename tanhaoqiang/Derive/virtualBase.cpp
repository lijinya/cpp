#include<stdio.h>
class CVirtualBase
{
public:
	virtual void show() = 0;
};
class CVirtualChild : public CVirtualBase
{
public:
	virtual void show()
	{
		printf("virtual child\n");
	}
};

int main6()
{
	CVirtualChild VirtualChild;
	VirtualChild.show();
	CVirtualBase *pVBase = &VirtualChild;
	pVBase->show();
	return 0;
}