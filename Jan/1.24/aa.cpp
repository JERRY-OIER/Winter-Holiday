#include<bits/stdc++.h>
using namespace std;
int NUM; 
void f(int x)
{   
	int m,i,a[1000],j;
	if(x>NUM) return ;
	for(int i=1;i<=x;i++)
	{
	    cout<<i; 
	}
	cout<<'\n';
    f(x+1);
}
int main()
{
	
	cin>>NUM;
	f(1);
	return 0;
}
