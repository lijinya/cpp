#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> v = {2 , 5 , 4 , 7 , 8};
	sort(v.begin() , v.end());
	for(auto i : v)
	{
		cout << i << " " ;	
	}
	cout << endl;
	return 0;
}
