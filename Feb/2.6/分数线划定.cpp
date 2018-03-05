#include <bits/stdc++.h>
using namespace std;
int per[5001][2];
int main()
{
	int n,m,s;
	cin >> n >> m;
	for(int i = 1;i <= n;i ++){
		for(int j = 0;j <= 1;j ++){
			cin >> per[i][j];
		}
	}
	s = int(m * 1.5);
	for(int i = 1;i <= n;i ++){
		for(int j = i + 1;j <= n;j ++){
			if(per[i][1] < per[j][1]){
				int a = per[i][1];per[i][1] = per[j][1];per[j][1] = a;
				int b = per[i][0];per[i][0] = per[j][0];per[j][0] = b; 
			}
			if(per[i][1] == per[i + 1][1] && per[i][0] > per[i + 1][0]){
				int a = per[i][1];per[i][1] = per[i + 1][1];per[i + 1][1] = a;
				int b = per[i][0];per[i][0] = per[i + 1][0];per[i + 1][0] = b;
			}
		}
	}
	while(per[s][1] == per[s + 1][1]){
		s++; 
	}

	cout << per[s][1] << " " << s << endl;
	for(int i = 1;i <= s;i ++){
			cout << per[i][0] << " " << per[i][1] << endl;
	}
	return 0;
}
