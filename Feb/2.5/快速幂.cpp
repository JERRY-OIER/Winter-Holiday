#include <bits/stdc++.h>
using namespace std;
long long M(long long x,long long k)
{
	long long s = 1;
	for(int i = 1;i <= k;i ++){
		s *= x;
	}
	return s;
}
int main()
{
	long long b,p,k;
	cin >> b >> p >> k;
	long long n = M(b,p) % k;
	cout << b << "^" << p << " mod " << k << "=" << n;
	return 0;
}
