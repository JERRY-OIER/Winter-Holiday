#include<bits/stdc++.h>
using namespace std;
int num[1000];
void Sort(int s,int l)
{
	int i,j,m;
	m = num[(s + l) / 2];
	j = l;i = s;
	do
	{
		for(;num[i] <= m;i ++);
		for(;num[j] >= m;j --);
		if(i <= j){
			int o = num[i];num[i] = num[j];num[j] = o;
			i ++;j --;
		}
	}while(i <= j);
	if(s < j) Sort(s,j);
	if(l > i) Sort(i,l);
}
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i <= n;i ++) cin >> num[i];
	Sort(1,n);
	cout << num[1];
	for(int i = 2;i <= n;i ++) cout << " " << num[i];
	cout<<endl;
	return 0;
}
/*int main()
{
	int n;
	cin>>n;
	for(int i = 1;i <= n;i ++){
		cin >> num[i];
	}
	
}*/
