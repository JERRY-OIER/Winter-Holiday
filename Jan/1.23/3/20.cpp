#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a,num,i,j,k,l,n,m,h,b;
	for(num=1;num<=50;num++)
	{
		a=1;
		b=1;
		i=0;
		h=0;
		for(j=1;j*j<=num;j++)//J是num的平方根数 
		for(k=2;k<=j;k++)//变量k from 2 ~ j; 
			if(num%k==0) a=0; 
		l=num%10*10+num/10;	
		
		for(n=1;n*n<=l;n++)//n同j 
		for(m=2;m<n;m++)
		{
			if(l%m==0) 	b=0;
		}
		if(a&&b) cout<<num<<endl;
	}
    return 0;
}
