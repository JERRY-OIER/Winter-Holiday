#include <bits/stdc++.h>
using namespace std;

int a[10046];
int r[10046];

void merge(int s,int n)
{
	int m = ( s + n ) / 2;
	if(s == n) return;
	merge(s,m);
	merge(m + 1,n);
	int i = s,j = m + 1,l = s;
	for(  ; i <= m && j <= n ;){
		if(a[i] <= a[j]){
			r[l] = a[i];
			l ++;
			i ++;
		}
		else{
			r[l] = a[j];
			l ++;
			j ++;
		}
	}
	while(i <= m){
		r[l] = a[i];l ++;i ++;
	}
	while(j <= n){
		r[l] = a[j];l ++;j ++;
	}
	for(int k = s;k <= n;k ++){
		a[k] = r[k];
	}
}

int main()
{
	int N;
	cin >> N;
	for(int i = 1;i <= N;i ++){
		cin >> a[i];
	}
	merge(1,N);
	for(int i = 1;i <= N;i ++){
		cout << a[i] << " ";
	}
	return 0;
}
