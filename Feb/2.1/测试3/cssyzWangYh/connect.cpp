#include<iostream>
using namespace std;

int haton(int x1,int y1,int x2,int y2)
{
	if(x1 - x2 < 0)
	{
		x1 = x1 + x2;
		x2 = x1 - x2;
		x1 = x1 - x2;
	}
	if(y1 - y2 < 0)
	{
		y1 = y1 + y2;
		y2 = y1 - y2;
		y1 = y1 - y2;
	}
	return (x1 - x2) + (y1 - y2);
}

bool connected[5000][5000];
bool yet[30000];

int main()
{
	freopen("connect.in","r",stdin);
	freopen("connect.out","w",stdout);
	int N,C,m,num = 0,max_num = 0;
	cin >> N >> C;
	m = 0;
	int dot[N + 1][3];
	for(int k = 1;k <= N;k ++)
	{
		for(int x = 1;x <= 2;x ++)
		{
			cin>> dot[k][x];
		}
	}
	for(int i = 1;i <= N;i ++)
	{
		for(int j = i+1;j <= N;j ++)
		{
			if(haton(dot[i][1],dot[i][2],dot[j][1],dot[j][2]) <= C)
			{
				connected[i][j] = 1;
			}
		}
	}
	for(int x = 1;x <= N;x ++)
	{
		for(int y = x + 1;y <= N;y ++)
		{
			bool a = 1;
			for(int z = 0;z <= N;z++)
			//	for(int l = 0;l <= N;l ++)
					if( connected[x+z][y] == 1)
					{
						 num++;
						 a = 0;
						 //break;
					}
			
			if(max_num < num)
			{
				m++;	max_num = num;
			}
			if(a)
			{
			//num = 0;
			
			}
		}
	}
	cout<<m<<" "<<max_num;
	return 0;
}
