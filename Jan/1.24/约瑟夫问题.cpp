#include <bits/stdc++.h>
using namespace std;
int a[10001];
int main()
{
	int n,m,i=1,k,j=0,c=0; 
	cin>>n>>m; 
	for(;c<n-1;i++)
		{
			if(i>n){i=1;	}
			if(a[i]==0){j++;}
			if(j==m) {a[i]=1;j=0;c++;cout<<" "<<i<<" ";}	    
		}
		for(k=1;;k++)
		if(a[k]==0) break;
		cout<<endl<<k;	
	return 0;
}
