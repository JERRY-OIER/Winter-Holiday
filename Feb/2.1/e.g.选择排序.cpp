//Ñ¡ÔñÅÅÐò     large---->small        O(N^2)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("x.in","r",stdin);
	int N;
	cin>>N;
	int a[N+1];
	for(int i = 1;i <= N;i ++) cin >> a[i];
	for(int i = 1;i <= N;i ++){
		for(int j = i+1;j <= N;j ++){
			if(a[i] < a[j]){
				a[i] = a[i] + a[j]; a[j] = a[i] - a[j]; a[i] = a[i] - a[j];
			}
		}
	}
	cout<<endl;
	for(int i = 1;i <= N;i ++)
		cout<<a[i]<<" ";
	return 0;
} 
