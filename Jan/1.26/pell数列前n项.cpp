#include<iostream>
using namespace std;
int pell(int x)
{
	if(x==1) return 1;
	if(x==2) return 2;
	if(x!=1&&x!=2&&x>0) return 2*pell(x-1)+pell(x-2);
}
int main()
{
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	cout<<pell(i)<<" ";
	return 0;
}

