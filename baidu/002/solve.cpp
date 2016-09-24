

#include <stdio.h>

/*
	动态规划
*/
const int MAX_N = 200000;
const int MAX_T = 1000000;//内存限制
int dp[MAX_T + 1];
int a[MAX_N + 1];
int max(int x , int y)
{
	return x > y ? x : y;
}
void solve()
{
	int n , t , c;
	scanf("%d%d%d" , &n , &t ,  &c);
	for(int i = 1; i <= n; ++i)
	{
		scanf("%d" , a + i);
	}
	for(int i = 1; i <= n; ++i)
	{
		for(int j = t - 1; j>= a[i]; ++j)
		{
			dp[j] = max(dp[j] , dp[j - a[i]] + 1);
		}
	}
	printf("%d\n" , dp[t - 1]);
}

int main()
{
	solve();
	return 0;
}