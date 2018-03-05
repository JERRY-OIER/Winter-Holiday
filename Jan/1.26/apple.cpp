#include<bits/stdc++.h>
using namespace std;
int K(int apple,int plant,int m)//apple为剩余多少苹果;plant为剩余多少盘子;m为最多放多少苹果（为避免重复）;
{
	int i,ans=0;
	if(plant==0)
		if(apple==0) {ans++;return 1;}
		else return 0; 
	for(i=m;i>=(apple-1)/plant;i--)
		if(i<=apple)
			ans+=K(apple-i,plant-1,i);
	return ans;
}
int main()
{
	int M,N;
	cin>>M>>N;
	cout<<K(M,N,M)<<" ";
	return 0;
}
