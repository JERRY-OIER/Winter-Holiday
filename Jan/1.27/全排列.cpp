//全排列
#include<iostream>
using namespace std;

void all(int all,int begin,int end)//all:一共多少数;begin:起始数;end:终止数 
{
	for(int i=1;all;i++)
		{
			if(begin!=i)
			{
				
			} 
			else 
			{
				cout<<begin;
				all(all-1,begin+1,end)				
			}
		}
}

int main()
{
	int n;
	cin>>n;
	void(n,1,n);
	return 0;
} 
