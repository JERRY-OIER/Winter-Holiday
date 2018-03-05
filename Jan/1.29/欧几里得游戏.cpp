#include<bits/stdc++.h>
using namespace std;

int stemp = 0;

void games(int n,int m)
{
	if(m<n)
	{
		m=m+n;n=m-n;m=m-n;
	}
	if(m%n==0)
	{
		cout<<
		return
	}
	
	
	/*
	if(m>2*n&&n!=0) 
	{
		cout<<"Stan wins"<<endl;
		return;	
	}
	if( n == 0 )
	{
		if( stemp % 2 != 0 )
			cout<<"Ollie wins"<<endl;
		else 
			cout<<"Stan wins"<<endl;
			return;
	}
	stemp++;
	games(n,m-n);
	*/	

} 

int main()
{
	int i;
	cin>>i;
	int a[i+1];
	int b[i+1];
	for(int j=1;j<=i;j++)
	{
		cin>>a[j]>>b[j];
	}
	for(int k=1;k<=i;k++)
	{
		games(a[k],b[k]);
	}
	return 0;
}
