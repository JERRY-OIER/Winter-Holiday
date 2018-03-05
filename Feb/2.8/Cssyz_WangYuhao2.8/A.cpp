#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<iostream>
using namespace std;
const int MAXN = 10000000;
int a[MAXN];
int q[MAXN],ans = 0;;
int main()
{
	freopen("A.in","r",stdin);
	freopen("A.out","w",stdout);
	int n,sum = 0,ave;
	cin >> n;
	for(int i = 1;i <= n;i ++){
		cin >> a[i];
		sum += a[i];
	}
	ave = sum / n;
	for(int i = 1;i <= n;i ++){
		a[i] = a[i] - ave;
	} 
	for(int i = 1;i <= n;i ++){
		if(a[i] == 0 )continue;
		a[i+1] += a[i];
		ans ++;
	}
	cout <<ans;
	return 0;
}	

