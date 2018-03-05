#include<iostream>
using namespace std;
int C = 0;	int a[10001];
int main()
{
	int N;
	cin>>N;

	for(int i = 1;i <= N;i ++) cin >> a[i];
	for(int i = 1;i <= N;i ++){
		for(int j = i+1;j <= N;j ++){
			if(a[i] > a[j]){
				a[i] = a[i] + a[j]; a[j] = a[i] - a[j]; a[i] = a[i] - a[j];
			}
		}
	}
	for(int k = 1;k <= N - C;k ++){
		for(int s = k + 1;s <= N ;s ++){
			if(a[k] == a[s]){
				C ++;
				for(int l = s;l <= N ;l ++){
					a [l] = a [l + 1];
				} 
				if(a [k] == a [s]) s--;
			}
			
			/*for(int i = 1;i <= N - C;i ++)
				cout<<a[i]<<" ";
			cout  << endl ;*/
		}
	}
	cout<<endl<<N-C<<endl;
	for(int i = 1;i <= N - C;i ++)
		cout<<a[i]<<" ";
	return 0;
}
