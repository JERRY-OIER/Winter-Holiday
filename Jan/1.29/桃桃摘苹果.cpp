#include<iostream>
using namespace std;
int main()
{
	int m,h[15],n=0;
	for(int i=1;i<=10;i++)
		cin>>h[i];
	cin>>m;
	for(int j=1;j<=10;j++)
	{
		if(m+30>=h[j]) n++; 
	}
	cout<<n;
	return 0;
} 
