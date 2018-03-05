#include<bits/stdc++.h>
using namespace std;

void gcd(int a,int b)
{
	if(a<b)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	if(b == 0) 
	{
		cout<<a;
		return ;	
	}
	gcd(b,a-b);
}
	
int main()
{
	int M,N;
	cin>>M>>N;
/*	if(M<N)
	{
		M=M+N;
		N=M-N;
		M=M-N;
	}
*/	gcd(M,N);
	return 0;
}	
