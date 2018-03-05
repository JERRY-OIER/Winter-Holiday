#include<iostream>
using namespace std;
double k(double x1,double x2,double y1,double y2)
{
	return (y1-y2)/(x1-x2);
}
int main()
{
	freopen("dot.in","r",stdin);
	freopen("dot.out","w",stdout);
	int N;
	cin >> N;
	int dot[N+1][3];
	for(int i=1;i<=N;i++)
	{
		for(int k = 1;k <= 2;k ++)
		{
			cin>>dot [i][k];
		}
	}
	for(int i = 1;i <= N;i++)
	{
			
	}
}
