#include <bits/stdc++.h>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int num,man,i=0,l=100,s=0;//猜数范围在0~100以内 
	for(;;i++)
	{
		cin>>man;
		if(s==l&&s==man) break; 
		if(man-s>l-man)
		{
			cout<<"larger   again"<<endl;
			if(man<=l) l=man-1;
		}
		else
		{
			cout<<"smaller   again"<<endl;
			if(man>=s) s=man+1;
		}
		cout<<"剩下数据范围是："<<s<<"~"<<l<<endl;
	}
	cout<<"congratulations!";
	return 0;
}
