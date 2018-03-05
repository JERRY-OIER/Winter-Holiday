/*
首先，证明一下欧几里得运算求最大公约数的定理：
假设c是a，b的最大公约数
则a%c==0且b%c==0;
...
------->
gcd(a,b)==gcd(b,a%b)
*/
#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
	if(b==0) return a;
	else return GCD(b,a%b); 
}
int main()
{
	int M,N;
	cin>>M>>N;
	if(M<N)
	{
		M=M+N;
		N=M-N;
		M=M-N;
	}
	cout<<GCD(M,N);
	return 0;
}
