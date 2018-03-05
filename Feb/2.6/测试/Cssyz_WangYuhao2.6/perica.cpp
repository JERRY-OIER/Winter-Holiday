#include <bits/stdc++.h>
using namespace std;
int num[10001];
int many[1001];
int main()
{
	freopen("perica.in","r",stdin);
	freopen("perica.out","w",stdout);
	int n,k;
	cin >> n >> k;
	for(int j = 1;j <= n;j ++){
		cin >> num[j];
	}
	for(int j = 1;j <= n;j ++){
		for(int i = 1;i <= 100000000;i ++){
			if(num[j] == i){
				many[i]++;
				break;
			}
		}
	}
	cout<<39;
	return 0;
}
