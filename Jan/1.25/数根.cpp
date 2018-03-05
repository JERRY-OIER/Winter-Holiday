#include<iostream>
using namespace std;
int f(int x)
{
	int n;
	for(n=0;x!=0;x/=10)
	{
		n+=x%10;
	}
	if(n/10==0) 
	{
		return n;
	}
	else 
	{
		return f(n);//return 后的N变成x 
	} 
}
int main()
{
	int x;
	scanf("%d",&x);
	cout<<f(x);
	return 0;
}

