#include<iostream>
using namespace std;
int main()
{
	long long n,s=1;
	
	cin>>n;
	for(int i = 2;i <= n;i ++)
	{
		s = s * 2 + 1;
	}
	cout<<s;
	return 0;
}
