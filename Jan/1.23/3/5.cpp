#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,k=1;
	float z;
	cin>>n;
	for(i=2;i*i<=n;i++) 
		{
			if(n%i==0) {k=0;break;};

				 	
		}
	if(k) cout<<"yes,it's";
	else cout<<"no,it isn't";
	
    return 0;
}
