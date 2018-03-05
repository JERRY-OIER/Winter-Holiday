//exam3.26-1  P94
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y,eat;
	scanf("%d %d %d",&n,&x,&y)
    ;if(y&x==0) eat=y/x;
    else eat=y/x+1;
    cout<<n-eat;
    return 0;
}

