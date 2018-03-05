#include<bits/stdc++.h>
using namespace std; 
double sum(int x)
{
	if(x>0) x=x;
	else x=-x;
	return x;
}
int main()
{
	int x1,x2,y1,y2,s;
	scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
	s=sum(x1-x2)+sum(y1-y2);
	cout<<endl<<s;
}
