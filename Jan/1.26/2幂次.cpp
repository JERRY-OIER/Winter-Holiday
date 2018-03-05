#include<bits/stdc++.h>
using namespace std;
void f(int x)
{
	int m,i,a[1000],j;
	for(i=0;x!=0;i++)
	{	a[i]=x%2;
		x/=2;
	//	cout<<a[i];
	}
	for (;i>=0;i--)
	{
	 
		if(a[i]==1) 
		{   if(i==1) {
		cout<<"+2";
	
		} else
		{
	
	    	cout<<"+2(";
			if(i>=2) f(i);
			else 
				if (i==0) cout<<"0";
		   cout<<")";
		}
			}		
	}
}
int main()
{
	int NUM; 
	cin>>NUM;
	f(NUM);
	return 0;
}
