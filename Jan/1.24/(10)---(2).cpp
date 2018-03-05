#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
	int n,i=0;
	cin>>n;
	for(;n>0;n/=2)
	{
		i+=1;
		if(n%2==0) a[i]=0
		;else a[i]=1; 
	//	cout<<a[i];
	}
	for(;i>=1;i--) cout<<a[i];
	return 0;
}

