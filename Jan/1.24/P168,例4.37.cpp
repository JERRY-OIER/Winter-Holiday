#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l,n,i=1,k=0,x,j=1//kÎª´ÎÊý 
	;cin>>n>>x;
//	for(l=n;l>0;l/=10) j++;
	for(;i<=n;i++)
	{
		for(l=i;l>0;l/=10)
			if(l%10==x) {k++;}		
	}
	cout<<k;
	return 0;
}

