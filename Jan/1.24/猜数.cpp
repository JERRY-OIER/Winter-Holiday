#include <bits/stdc++.h>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int num,man,i=0;
	srand(time(0));
	num=rand()%1000+1; 
	for(;;i++)
	{
		cin>>man;
		if(man==num) 
		{
			cout<<"It's right.";
			break;
		}
		if(man<num) 
		{cout<<"It's too little  please guess it again"<<endl;continue;}
		if(man>num) 
		{cout<<"It's too large  Please guess it again"<<endl;continue;} 
	}
	cout<<"you have guessed for"<<i<<"times";
	if(i<=5) cout<<endl<<"you are so splendid";
	if(i>5&&i<10) cout<<endl<<"good";
	if(i>=10) cout<<endl<<"bad";
	return 0;
}

