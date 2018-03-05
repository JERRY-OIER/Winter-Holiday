#include<iostream>
using namespace std;
int num[101];
int main()
{
	freopen("s.in","r",stdin);
	int N,temp = 0;
	cin >> N; 
	for(int i = 1;i <= N;i ++){
		cin>>num[i];
	}
	for(int i = 1;i <= N;i ++){
		for(int j = i + 1;j <= N-temp;j ++){
			if(num[i] > num[j]){
				int a = num[j];num[j] = num[i];num[i] = a;
 			} 
 			else{
 				if(num[i] == num[j]){
 					temp ++;
 					for(int k = j;k <= N ;k++){
 						num[k] = num[k + 1];
 					}
 				}
 			}
		}
	}
	cout<<N-temp<<endl;
	for(int s = 1;s <= N - temp;s++){
		cout<<num[s]<<" ";
	}
	return 0;
}
