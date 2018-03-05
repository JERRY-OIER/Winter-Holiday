#include <bits/stdc++.h>
using namespace std;
int a[10000]
;int main()
{
	int k,num,i=0;
	cin>>num>>k;
	for(;num!=0;num/=k)
	{
		i+=1;
		a[i]=num%k;
	}
	for(;i>=1;--i) cout<<a[i];	
	return 0;
}

