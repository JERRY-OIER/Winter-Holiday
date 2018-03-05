#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int stemp=0;
void hanoi(int n,char a,char b,char c)//hanoi(n,a,b,c)
{	
	if(n==1)
		cout<<++stemp<<".move "<<n<<" from "<<a<<" to "<<c<<endl;
	else  
	{
		hanoi(n-1,a,c,b); 
		cout<<++stemp<<".move "<<n<<" from "<<a<<" to "<<c<<endl;
		hanoi(n-1,b,a,c);
	}

}
int main()
{
	int n;
	char a,b,c;
	cin>>n;
	hanoi(n,'a','b','c');
	system("pause"); 
	return 0;
}
