#include <bits/stdc++.h>
using namespace std;
int a[10000][10000],b[1000];
int main()
{
	int i=2,j=0,n,l;//n为位数；I为记位数； 
	cin>>n;	//divide it into many pieces!!
	a[0][0]=0;//标准格式：a[i个数][l位数] 
	a[1][0]=1;
	for(i=2;i<=n;i++)
	{
		for(l=0; l<1000;l++)		{a[i][l] = a[i-1][l] + a[i-2][l];}
        for(l=0;l<1000;l++)			{a[i][l+1] += a[i][l]/10;a[i][l] %= 10;} 
		for(l=999;a[i][l]==0;l--)	{b[i] = l;}	
	}
	for(i=1;i<=n;i++)
	{
		for(j=b[i]-1;j>=0;j--)
			cout<<a[i][j];
		cout<<" ";
	}
	return 0;
}
