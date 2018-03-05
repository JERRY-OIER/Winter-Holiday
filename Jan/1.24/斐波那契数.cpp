#include <bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
	int i=2,j=0,n;
	cin>>n;
	a[0]=0;
	a[1]=1;
	for(;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(;j<i;++j) cout<<a[j]<<endl;
	return 0;
}

