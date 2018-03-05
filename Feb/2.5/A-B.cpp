#include <bits/stdc++.h>
using namespace std;
int num[200001];
int s[200001];
bool used[200001];
int ans = 0;
int main()
{	
	int N,C;
	cin >> N >> C;
	for(int i = 1;i <= N;i ++){
		cin >> num[i];
	}
	for(int i = 1;i <= N;i ++){
		for(int j = i + 1;j <= N;j ++){
			if(num[i] + C == num[j] || num[j] + C == num[i]){ 
				ans ++;
			}
		}
	}
	/*for(int i = 1;i <= N;i ++){
		s[num[i]] ++; //cout<<"$ "<<num[i]<<" $";
	}
	for(int i = 1;i <= N;i ++){
		if(used[num[i]] == 0){
			ans += s[num[i]] * s[num[i] + 3];//cout<<"(  "<<ans<<"  )";
			used[num[i]] = 1;
		}
	}*/
	cout << ans;
	return 0;
}
