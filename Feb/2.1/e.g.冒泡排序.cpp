//Ã°ÅÝÅÅÐò   big----->small      O(N)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("x.in","r",stdin);
	int N;
	scanf("%d",&N);
	int num[N+1];
	for(int i = 1;i <= N;i ++) cin>>num[i];
	for(int x = 1;x <= N - 1;x ++)
		for(int i = 1;i <= N - x;i ++){
			int j = i + 1;
			if(num[i] < num[j]){
				num[i] = num[i] + num[j] ; num[j] = num[i]- num[j] ; num[i] = num[i] - num[j];
			}
		}
	for(int i = 1;i <= N;i ++) cout<<num[i]<<" ";
	return 0;
} 
