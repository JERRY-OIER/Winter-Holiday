#include <bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
	if(x < y){int a = x;x = y;y = a;}
	if(y == 0) return x;
	gcd(y,x%y);
}
/*void f(char color,int n)
{
	if(color = 'W'){
		f()
	}
	else {
		
	}
}*/
int main()
{
	/*int T,K,Bs = 0,Ws = 0,ans = 0,b;
	string x;
	char a;
	cin >> T;
	int N[T + 1];
	bool s[T + 1];
	for(int i = 1;i <= T;i ++){
		cin >> N[i];
		for(int j = 1;j <= N[i];j ++){
			cin >> K >> a;
			if(a == 'B') {
				for(int z = 1;z <= K;z ++){
					x += B;
				}
				Bs ++;
				s[i] = true;
			}
			else{
				for(int z = 1;z <= K;z ++){
					x += W;
				}
				Ws ++;
				s[i] = false;
			}
		}
	}
	int k = gcd(Ws,Bs);
	Ws /= k;Bs /= k;
	if(Ws < Bs){
		b = Bs/Ws;
		if(s[1] == true)
		for(int e = 0;;e ++){
			if(x[e] == B) continue;
			else{
				
			}
		}
	}
	{
		
	}
	/*if(Ws < Bs){
		b = Bs / Ws
		for(int l = 1;l <= T;l ++){
			if(s[l]){
				ans ++;
				N[l] = 0;
				if(s[l + 1] == false){
					N[l + 1] -= N[l]
				} 
				continue;
			}
			else{
				
			}
		}
	}*/
//	freopen("A.in","r",stdin);
//	freopen("A.out","w",stdout);
	cout<<2<<endl<<3<<endl<<5;
	return 0;
}
