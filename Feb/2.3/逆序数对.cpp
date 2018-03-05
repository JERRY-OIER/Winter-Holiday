//归并应用：逆序数对 
#include<bits/stdc++.h>
using namespace std;
int n[50000];
int r[50000];
int NUM = 0;
void merge(int b,int e)
{
	if(b == e) return ;
	int m = (b + e) / 2,l,j,i;
	merge(b,m);
	merge(m+1,e);
	for(l = b,i = b,j = m + 1 ; i <= m && j <= e; ){
		if(n[i] < n [j]){
			r[l] = n [i];
			i ++;
			l ++;
		}
		else {
			r[l] = n [j];
			j ++;
			l ++;
		}
	}
	while(i <= m ){
		r[l] = n[i];
		l ++;
		i ++;
	}
	while(j <= e){
		r[l] = n[j];
		l ++;
		j ++;
	}
	for(int s = l;s <= e;s ++){
		n[s] = r[s];
	}
	for(int j = m + 1;j <= e;j ++){
		for(int i = b;i <= m;i ++){
			if(n[i] > n[j]){
				//cout<<n[i]<<" ";
				NUM = NUM /*+ m - i*/ + 1;
				//break;
			}
		}
	}
}
int main()
{
	int N;
	cin >> N; 
	for(int i = 1;i <= N;i ++) cin >> n[i];
	merge(1,N);
	cout << NUM;
	return 0;
}
