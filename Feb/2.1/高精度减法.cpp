//高精度减法
#include <iostream>
#include <string>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;
int a[100046];
int b[100046];
int c[100046];
string s1,s2; 
int main()
{
	
	int x=0,k,l1,l2,l;
	cin>>s1;
	cin>>s2;
	l1 = s1.size();l2 = s2.size();
	if(l1 < l2) l = l2;
	else l = l1;
	for(int x = l1-1;x >=0;x--) a[l1-x] = s1[x]-'0';
	for(int x = l2-1;x >=0;x--) b[l2-x] = s2[x]-'0';
	if(l1 > l2)
		{
			for(k = 1;k <= l1||k<=l2;k ++)
			{
				c[k] = a[k] - b[k] - x;
				if(c[k] < 0)
				{
					c[k] += 10;
					x = 1;
				}
				else x=0;
			}
			for(k = l;c[k] == 0;k--) ;
			for (int d = k;d >= 1;d --) cout<<c[d];
		}
	else if(l1 < l2){
			for(k = 1;k <= l1||k<=l2;k ++)
			{
				c[k] = b[k] - a[k] - x;
				if(c[k] < 0)
				{
					c[k] += 10;
					x = 1;
				}
				else x=0;
			}
			for(k = l;c[k] == 0;k--) ;
			cout<<"-";
			for (int d = k;d >= 1;d --) cout<<c[d];		
		}
		else{
			for(int d=l;d >= 1;d--)
				{
					if(a[d]==b[d]) 
					{
						if(d == 1) cout<<0;
						continue;
					}
					if(a[d]>b[d])
					{
				
						for(k = 1;k <= l1||k<=l2;k ++)
						{
							c[k] = a[k] - b[k] - x;
							if(c[k] < 0)
							{
								c[k] += 10;
								x = 1;
							}
							else x=0;
						}
						for(k = l;c[k] == 0;k--) ;
						for (int d = k;d >= 1;d --) cout<<c[d];
						return 0;			
					}
					else{
						for(k = 1;k <= l1||k<=l2;k ++)
						{
							c[k] = b[k] - a[k] - x;
							if(c[k] < 0)
							{
								c[k] += 10;
								x = 1;
							}
							else x=0;
						}
						for(k = l;c[k] == 0;k--) ;
						cout<<"-";
						for (int d = k;d >= 1;d --) cout<<c[d];
						return 0;
					}
					
				}
			}
	return 0;
}
