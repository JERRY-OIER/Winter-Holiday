#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;1
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>=0;--j)
		{
			cout<<" ";
		}
		for(k=1;k<=2*i-1;k+=1)
		{
			cout<<"*";
		}
		cout<<endl;
	}
    return 0;
}

