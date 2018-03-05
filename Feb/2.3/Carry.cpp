//Carry
#include<bits/stdc++.h>
using namespace std;
int n[10001];
int temp = 0;
int main()
{
	int N;
	cin >> N;
	for(int i = 1;i <= N;i ++){
		cin >> n[i];
	}
	for(int s = 1;s <= N - 1;s ++){
		for(int k = 1;k <= N - s;k ++){
			if (n[k] > n[k + 1]){
				temp ++;
				int a = n[k];
				n[k] = n[k + 1];
				n[k + 1] = a;
			}
		}
	}
	cout << temp;
	return 0;
}
