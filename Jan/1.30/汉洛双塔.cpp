#include<iostream>
using namespace std;

int stemp = 0;

void hanoi(int n,char begin,char end,char pass)
{
	if(n == 1) stemp++;
	else 
	{
		hanoi(n-1,begin,pass,end);
		stemp++;
		hanoi(n-1,pass,end,begin);
	}
	
}
int main()
{
	freopen("hanoi.in","r",stdin);
	freopen("hanoi.out","w",stdout);	
	int n;
	char a,b,c;
	cin>>n;
	hanoi(n,a,b,c);
	cout<<stemp*2;
	return 0;
}
