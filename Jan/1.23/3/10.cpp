#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int num,i,j,k1,k2,n1,n2,a1,a2,q1,q2;
	cin>>num;
	if(num%2!=0) cout<<"please do it in right way";
	for(i=num-2,j=2;j<num/2&&i>num/2;j++,i--)
	{
		for(q1=1;q1*q1<=i;q1++)
		for(q2=1;q2*q2<=j;q2++)
		n1=0;
		n2=0;
		for(k1=2;k1<q1;k1++)
		{
			if(i%k1!=0) n1++;
			else 
			{a1=0;break;}
		}
		if(n1==q1-2) a1=1;
		for(k2=2;k2<q2;k2++)
		{
			if(j%k2!=0) n2++;
			else{a2=0;break;}
		}
		if(n2==q2-2) a2=1;
		if(a1&&a2)
			{cout<<"="<<i<<"+"<<j;}
			//printf("=%d+%d", i, j); 
		
	}
    return 0;
}
