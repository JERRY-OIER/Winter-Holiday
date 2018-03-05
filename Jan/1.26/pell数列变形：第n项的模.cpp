#include<bits/stdc++.h>
using namespace std;
int pell(int x)
{
	if(x==1) return 1;
	if(x==2) return 2;
	if(x!=1&&x!=2) return 2*pell(x-1)%32767+pell(x-2)%32767;
}
int main()
{
	int n;
	cin>>n;
	cout<<pell(n)%32767;
	return 0;
}
