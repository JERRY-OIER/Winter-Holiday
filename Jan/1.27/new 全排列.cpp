//全排列 
#include<bits/stdc++.h>																																																		
using namespace std;

bool use[1000];
int a[1000];
int h;
int n;

void f(int x)
{
	
	if(x==n+1)
	{
		for(int k=1;k<=n;k++) cout<<a[k]<<" ";
		cout<<endl;
		return;
	}	
	for(int i=1;i<=n;i++)//枚举第x位数的值 
	{
		if(!use[i])
		{
			a[x]=i;
			use[i]=true;
			f(x+1);
			use[i]=false;	
			//a[x]=0;		
		}
	}	 
} 
int main()
{
	
	cin>>n;
	f(1);
	return 0;
} 
