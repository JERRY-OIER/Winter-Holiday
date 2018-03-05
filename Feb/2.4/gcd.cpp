#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
	if(y == 0) return x;
	else gcd(y,x%y);
}
int main()
{
	int a,b,ans = 0;
	cin>>a>>b;
	for(int i = a;i <= b;i ++){
		for(int j = a;j <= b;j ++){
			if(gcd(i,j) == a && (i/a)*(j/a)*a == b) ans ++;
		}
	}
	cout << ans;
	return 0; 
}
