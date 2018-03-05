#include <bits/stdc++.h>
using namespace std;
bool out [30];
int main()
{
	int n,K,m,j = 0;
	cin >> K;
	n = 2 * K;
	for(m = 1;;m ++){
		out[30] = {false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false};
		int c = 0;
		for(int i = 1;c < n;i ++){
			if(i > n){
				i = 1;
			}
			if(out[i] == 0){j ++;}
			if(j == m){
				out[i] = 1;	
				j = 0;
				c++;
			}
			
			bool a = 1;
			for(int s = K + 1;s <= n;s ++){
				if(out [s] == false){
					a = false;
					break;	
				}
			}
			if(a){
				bool b = 1;
				for(int s = 1;s <= K;s ++ ){
					if(out[s] == true) {
					b = 0;
					break;
					}
				}
				if(b){
					cout<<m;return 0;;
				}
			}
			
		}
		
	}
		return 0;
}
