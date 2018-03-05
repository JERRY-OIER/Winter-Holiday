#include<iostream>
using namespace std;

bool use[20];
int  sum[20];
int  c[20];
int m = 0;
int  ans = 0;
int the_min = 0;
int mins[20][20];
int main()
{
	freopen("elevator.in","r",stdin);
	freopen("elevator.out","w",stdout);
	int N,W;
	cin >> N >> W;
	for(int i = 1;i <= N;i ++)
	{
		cin >> c[i];
	}
	
	for(int i = 1;i <= N;i ++)
	{
		sum[i] += c[i];
		use[i] = 1;
		for(int j = 1;j <= N;j ++)
		{
			sum[i] = c[i];
			if(sum[i] + c[j] <= W)
				sum [i] += c[j]; 
			mins [i][j] = W - sum[i];
			if(the_min > mins[i][j])
				the_min = mins[i][j]; 
		}
		for(int x = 1;x <= N; x ++)
		{
			if(mins [i][x] == the_min)
			{
				ans ++;m = x;break;
			}
		}
		use[m]=1;
	}
	cout<<ans;
	return 0;
}
