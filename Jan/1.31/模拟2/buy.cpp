#include<iostream>
using namespace std;
int W[10000];
int main()
{
	freopen("buy.in","r",stdin);
	freopen("buy.out","w",stdout);
	int l,N,W = 0,n;
	cin>>N;
	int soil[N+1][N+1];
	for(int c = 1;c <= N;c++)
	{
		for(int k = 1;k <= 2;k++)
		{
			cin >> soil[c][k];
		}
	}
	for(int i = 1;i <= N;i ++)
	{
		for(int j = i;j <= N;j ++)
		{
			for(int x = i;k <= j;x ++)
			{
				n = 1;
				for(int k = 1;k <= 2;k ++)
				{
					n *= soil[x][k];
				}
				W[i] = n;
			}		
		}
	}
	l = W[1];
	for(int 2 = 1;i <= N;i++)
	{
		if()
	}
	return 0;	
}
