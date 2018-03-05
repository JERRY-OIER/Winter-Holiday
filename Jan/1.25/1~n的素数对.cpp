#include<bits/stdc++.h>
using namespace std;
int f(int x)
{
	bool a=1,b=1;
	int i,j,n;
	n=x+2;
	for(i=2;i<x;i++)
		if(x%i==0) {a=0;break;}
	for(j=2;j<n;j++)
		if(n%j==0) {b=0;break;}
	if(a&&b) return x;
	else return 0;
}
int main()
{
	int n,k;
	bool empty=1;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		k=f(i);
		if(k!=0) {cout<<k<<" "<<k+2<<endl;empty=0;}	
	}
	if(empty) cout<<"empty";
	return 0;
}
