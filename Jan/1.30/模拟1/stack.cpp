//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int N,i;
int W[3000];
int h=1;
int sum[1000];

void stack(int x)									
{
	sum[1] = W[N];
	for(int j = W[x];j >= 1;j--)
	{
		for(int k = W[x-1];;k --)
		{
			
			if(sum[h] <= sum[h + 1])
			{
				h++;
				stack(k);
				
			}
			if(k==0) return;
			sum[h + 1] += W[k];
			
		}
	}
	
}

int main()
{

	cin>>N;
	for(int j=1;j<=N;j++)
	{
		cin>>W[j];
	}
	stack(N);
	cout<<h;
	return 0;
}
