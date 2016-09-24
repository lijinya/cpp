/*
 *	File : sort.cpp
 *	Author : lijinya
 *	Date : 2015/4/19
 *	Function : test the template on dasm and analyse
 * */

#include <iostream>
using namespace std;

template<typename T>
void sort(T *Arr , int nLen)
{
	for(int i = 0; i < nLen - 1; ++i)	
	{
		for(int j = i + 1; j < nLen; ++j)	
		{
			if(Arr[j] < Arr[i])	
			{
				swap(Arr[j] , Arr[i]);	
			}
		}
	}
}
int main(int argc , char *argv[])
{
	int nArr[5] = {23 , 54 , 24 , 75 , 15};
	float fArr[7] = {2.4 , 65.3 , 24.56 , 67.33 , 23.54 , 25.6 , 76.23};
	sort(nArr , 5);
	sort(fArr , 7);
	return 0;	
}
