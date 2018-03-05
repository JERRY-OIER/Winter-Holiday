#include<bits/stdc++.h>
using namespace std;
int ans = 0;
int f(int x)
{
	if(x == 1) return ans;
	if(x % 2 == 0) {
		ans ++;f( x / 2);
	}
	else {
		ans ++;f(3 * x + 1);
	}
}
int main()
{
	int N;
	cin >> N;
	int num[N + 1];
	for(int i = 1;i <= N;i ++){
		cin >> num[i];
	}
	for(int i = 1;i <= N;i ++){
		ans = 0;
		cout<<f(num[i])<<endl;
	}
	return 0;
	
	
}
