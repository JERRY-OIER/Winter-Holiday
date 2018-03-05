#include<iostream>
using namespace std;
int main()
{
	int N,sum=0,i,m,p,q;
	cin>>N;
	for(i=1;;i++)
	{
		sum+=i;
		if(N>sum-i-1&&N<=sum)
		{
			break;
		}
	}
	m=N-sum+i;
	for(p=1;p<m;p++);
	
	if(i%2==0)
		cout<<p<<"/"<<i+1-p;
	else 
		cout<<i+1-p<<"/"<<p;
	return 0;
}
