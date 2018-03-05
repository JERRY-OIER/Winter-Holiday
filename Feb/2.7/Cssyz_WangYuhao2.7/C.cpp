#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100000;
int num[MAXN][2];
int used[MAXN];
int main()
{
	int N,sum = 0;
	cin >> N;
	for(int i = 1;i <= N;i ++){
		cin >> num[i][0] >> num[i][1];
	}
	for(int k = 1;k <= N;k ++)
		for(int j = 1;j <= N;j ++){
			if(used[num[j][0]] == 0){
				if(sum < num[i][1]) sum = num[j][1];
				used[j] = 1;
			}
		}
}
