#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int main()
{
	int i,n,j,k,x,y,p,q;
	cin>>n;
	for(j=0;j<=n+1;j++)//from 8~14 为设定边界 
	{
		a[0][j]=1;
		a[n+1][j]=1;
		a[j][0]=1;
		a[j][n+1]=1;
	}
	for(i=1,y=1,x=1;i<=n*n;)//from 15~33 为赋值部分 
	{
		while(a[x][y]==0)//right
		{
			a[x][y]=i;y++;i++;
		}
		y-=1;x+=1;
		while(a[x][y]==0)//down
		{
			a[x][y]=i;x++;i++;
		}
		x-=1;y-=1;
		while(a[x][y]==0)//left
		{
			a[x][y]=i;y--;i++;
		}
		y+=1;x-=1;
		while(a[x][y]==0)//up
		{
			a[x][y]=i;x--;i++;
		}
		x+=1;y+=1;
	}
	for(p=1;p<=n;p++)//以下为输出部分 
		{
		for(q=1;q<=n;q++)
			printf("%3d",a[p][q]);
		cout<<endl;
		}
	return 0;
}

