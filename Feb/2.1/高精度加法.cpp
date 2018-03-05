//高精度加法
#include <iostream>
#include <string>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
int a[646];
int b[646];
int c[646];
string s1,s2; 
int main()
{
	
	int x=0,k,l1,l2,l;
	cin>>s1;l1 = s1.size();
	cin>>s2;l2 = s2.size();
	if(l1 < l2) {
		l = l2;
		/*for(int a = 1;a <= l2 - l1; a ++)
		{
			s1.insert(0,o);
		}*/
	}
	else {
		l = l1;
		/*for(int a = 1;a <= l1 - l2; a ++)
		{
			s2.insert(0,o);
		}*/
	}
	
	for(int x = l1-1;x >=0;x--) a[l1-x] = s1[x]-'0';
	for(int x = l2-1;x >=0;x--) b[l2-x] = s2[x]-'0';
/*	for(int i=1;i<=s1.size();i++)  cout<<a[i]<<" "<<endl;
	cout<<endl;
	for(int i=1;i<=s2.size();i++)  cout<<b[i]<<" "<<endl;
*/	
	
	for(k = 1;k <= l1||k<=l2;k ++)
	{
		c[k] = a[k] + b[k] + x;
		if(c[k] >= 10)
		{
			c[k] %= 10;
			x = 1;
		}
		else x=0;
	}
	for(k = l;k >=1;k--) cout<< c[k];
	return 0;
} 
