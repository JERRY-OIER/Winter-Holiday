#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int temp=0;

void hanoi(int num,char a,char c,char b)
{
	if(num==1) cout<<++temp<<". move "<<num<<" from "<<a<<" to "<<c<<endl;
	else
	{
		hanoi(num-1,a,b,c);
		cout<<++temp<<". move "<<num<<" from "<<a<<" to "<<c<<endl;
		hanoi(num-1,b,c,a);
	}
}

int main()
{
	char a='a',b='b',c='c';
	int n;
	cin>>n;
	hanoi(n,a,c,b);
	return 0;
}
