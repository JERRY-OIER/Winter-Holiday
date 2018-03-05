#include <iostream>
using namespace std;
int ans = 1;
int x[33646][2];
int y[34636][2];
int main()
{
	freopen("climb.in","r",stdin);
	//freopen("climb.out","w",stdout);
	int N,i=1,j=1,a;
	cin>>N;
//===================输入============================================== 
	for(int k = 1;k <= N;k ++)  cin>>x[k][0]>>y[k][0]>>x[k][1]>>y[k][1];
//===================排序==============================================
/*	for(int p = 1;p <= N - 1;p ++){
		for(int q = 1;q <= N - p;q ++){
			
		}
	}
*/		 
//===================寻找符合条件的值================================== 
	for(;i <= N;i = j){
		for(j = 1;j <= N;j ++){
			if( x[i][1] >= x[j][0] && x[i][1] < x[j][1]){
				a = y[i][1] - y[j][0];
				if( a > 0 ){
					ans++;
					break;
				}
			}
		}
	}  
	cout<<ans ;
	return 0;
}
