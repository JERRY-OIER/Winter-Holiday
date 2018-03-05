#include<iostream>
using namespace std;
int g(int y)
{
	int i=y,k=0,m=1;//输出最高位数位（二进制） 
	for(;y!=0;y/=2)
	{
		k++;
	}
	return k-1;
}
void f(int x)
{
	int k=1,gx;
	gx=g(x);
	if(x>0)
	{
		
		if(gx>2) 
		{
			cout<<"2(";
			f(gx);
			cout<<")";		
		} 
		else
		{
		
			if((gx)==1)
			{
				cout<<2;
			}
			else
			{
				cout<<"2("<<gx<<")";
				
			}
				//if(g(x)!=0)
				//	cout<<'+';
		}
		for(int i = 1;i <= gx;i ++)
		{
				k*=2;
		}
		if (x!= k) 
		{
			cout << "+";
			f(x-k);
		}
	}
	else return;
}

int main()
{
	int NUM; 
	cin>>NUM;
	f(NUM);
	return 0;
}

