#include<bits/stdc++.h>
using namespace std;
int a[30];
int times(int x)
{
	if(x==1) return 1;
	if(x==2) return 2;
	if(x>2) return times(x-1)+times(x-2) ; 
}
int main()
{ 
	int i,n;
	cout<<"attention:先输入个数:";
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cout<<endl<<times(a[i]);
	return 0;
}
