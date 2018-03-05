#include <bits/stdc++.h>
using namespace std;
int d[10001][2];
int ans = 1;bool use[1000][1000];
int main()
{
	freopen("dot.in","r",stdin);
	freopen("dot.out","w",stdout);
	int N,M;
	cin >> N >> M;
	for(int i = 1;i <= M;i ++)
	{
		for(int j = 0;j <= 1;j ++)
		{
			cin >> d[i][j];
		}
	}	
	for(int s = 1;s <= M;s ++)
	{
		for(int k = 1;k <= N;k ++)
		{
			if(s >= d[k][0] && s <= d[k][1] )
			{
				if(!(s >= d[k-1][0] || s <= d[k-1][1]))
					ans ++;
			}
		}
	}
	cout<<ans;
	return 0;
}
