#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	
		for(j=n-i;j>=0;--j) cout<<" ";
		for(k=1;k<=2*i-1;k++) //cout<<k;
			printf("%d", k);
		cout<<endl;
	}
	for(i=1;i<=n-1;++i)
	{
		for(j=1;j<=i+1;++j) cout<<" ";
		for(k=1;k<=(n-1-i)*2+1;k++) //cout<<k;
			printf("%d", k);
		cout<<endl;
	}
    return 0;
}

