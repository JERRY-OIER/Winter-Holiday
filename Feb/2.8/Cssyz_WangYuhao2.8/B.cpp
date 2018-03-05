#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<iostream>
using namespace std;
const int MAXN = 1000000;
int num[MAXN];
long long n;
void f(long long x)
{
	long long j,i,s;
	if(x == n + 1) return ;
	for(i = 1,s = 1;s <= n / x ;i += x,s ++){
		long long a = num[i];
		for( j = i;j < x + i - 1;j ++){
			num[j] = num[j + 1]; 
		}
		num[j] = a;
	}
	if(n % x == 0)
		f(x + 1);
	else{
		//i += x;
		long long m = n % x,k;
		long long b = num[i];
		for(k = i;k < i + m - 1;k ++){
			num[k] = num[k + 1];
		}
		num[k] = b;
		f(x + 1);
	}
}
int main()
{
	freopen("B.in","r",stdin);
	freopen("B.out","w",stdout);
	cin >> n;
	for(long long i = 1;i <= n;i ++) num[i] = i;
	f(1);
	for(long long k = 1;k <= n;k ++){
		cout << num[k] << " ";
	}
	return 0;
}
