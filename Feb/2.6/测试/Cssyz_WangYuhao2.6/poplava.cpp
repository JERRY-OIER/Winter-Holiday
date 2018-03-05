#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("poplava.in","r",stdin);
	freopen("poplava.out","w",stdout);
	int n,x,max_s,c;
	cin >> n >> x;
	max_s = ((n-1) * (n-2) /2);//cout <<max_s;
	if(x == 0){
		cout << "1";
		for(int i = 2;i <= n;i ++) {
			cout << " " << i;
			return 0;
		}
	}
	if(x > max_s) {
		cout<<-1;//判断是否超过最大值；
		return 0;
	}
	else {
		if(x == max_s) {    //判断是否等于最大值；
			cout << n - 1;
			for(int i = 1;i <= n - 2;i ++) cout << " " << i;
			cout << " " << n;
			return 0;
		}
		else{
			if(x <= n - 2){
				int i;
				cout<<"2";
				for( i = 3;i <= n; ){
					if(i == x + 2){
						cout <<" 1";x = 0;
						continue;
					}
					else{
						cout <<" "<< i;
						i ++;
					}
				}
				return 0;
			}
			else{
			//
				int sum = 0;
				int i;bool a = 1;
				for(i = 1;i <= n - 1;i ++){
					for(int j = 1;j <= i - 1;j ++){
						sum += j;
						if(sum == x) a = 0;break;//cout<<"$"<<x<<"*"<<sum;
					}
					if(!a) break;
				}
				cout<<i;
				for(int s = 1;s <= n;s ++){
					if(s == i) continue;
					cout << " " << s;
				}
				return 0;
			}
		}
	}
	return 0;
}
