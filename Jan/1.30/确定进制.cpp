#include<iostream>

using namespace std;
int i;

int ch(int n,int k)
{
	int s=1;
	for(int j=1;j<=k;j++)
		s*=n;
	return s;
}

int ten(int x)//转化成十进制 
{
	bool little=true;
	int sum=0;
	for(int j = 0;x > 0;j ++)
	{
		if(x%10>=i)  little = false;
		sum += (x % 10) * ch(i,j); 
		x/=10;
	}
	if(little)
		return sum;
	else return -1;
}

int main()
{
	int P,Q,R;
	cin>>P>>Q>>R;
	for
	(i = 2;i <= 20;i++)
	{
		if(ten(P) * ten(Q) == ten(R))
		{
			cout<<i ;
			return 0;
		}
	}
	cout<<0;
	return 0;
}											
