#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
	int k,i=0,n;
	cin>>n>>k;//k<0
	for(;n!=0;)
	{
		if(n%k<0) {a[i]=-k+n%k;n=n/k+1;}//cout<<"a"<<n<<" "<<a[i]<<" ";
		else {a[i]=n%k;n/=k;}//	cout<<"a"<<n<<" "<<a[i]<<" ";
		i+=1;
	}
	cout<<endl<<endl<<endl;
	for(i-=1;i>=0;i--)
		cout<<a[i];
	return 0;
}

