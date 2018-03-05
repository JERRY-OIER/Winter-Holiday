#include <iostream>
using namespace std;
const int MAXN = 21;
int num[MAXN];
int main()
{
	int n;
	cin >> n;
	for(int i = 1;i <= n;i ++){
		cin >> num[i];
	}
	for(int i = 1;i <= n - 1;i ++){
		for(int k = 1;k <= n - i;k ++){
			if(num[k] < num[k + 1]){
				int s = num[k];num[k] = num[k + 1];num[k + 1] = s;
			}
		}
	}
	for(int j = 1;j <= n;j ++){
		cout << num[j];
	}
	return 0;
}
