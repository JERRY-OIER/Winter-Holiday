#include <bits/stdc++.h>
using namespace std;
int ans =1;
void f(int x)
{
	int m = x / 2;
	if(m == 0) return;
	for(int i = 1;i <= m;i ++){
		ans ++;
		f(i);
	}
}
int main()
{
	int n;
	cin >> n;
	f(n);
	cout << ans;
	return 0;
}
