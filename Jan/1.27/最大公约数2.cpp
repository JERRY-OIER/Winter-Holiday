/*
���ȣ�֤��һ��ŷ��������������Լ���Ķ���
����c��a��b�����Լ��
��a%c==0��b%c==0;
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
