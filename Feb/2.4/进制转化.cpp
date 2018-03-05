#include <iostream>
#include <string>
int d[100001];
int a[100001];
using namespace std;

int c(int x,int y)
{
	int z = 1;
	for(int i = 1;i <= y;i ++){
		z *= x;
	}
	return z;
}
int main()
{
	int n,m,sum = 0,k;
	string s;
	cin >> n;
//	char A = 'A',B = 'B',C = 'C',D = 'D',E = 'E',F = 'F';
	cin >> s;
	for(int i = 0 , j = s.size() - 1 ; i < s.size() && j >= 0 ; i ++ , j --){
		if(s[i] == '0') d[i] = 0;
		if(s[i] == '1') d[i] = 1;
		if(s[i] == '2') d[i] = 2;
		if(s[i] == '3') d[i] = 3;
		if(s[i] == '4') d[i] = 4;
		if(s[i] == '5') d[i] = 5;
		if(s[i] == '6') d[i] = 6;
		if(s[i] == '7') d[i] = 7;
		if(s[i] == '8') d[i] = 8;
		if(s[i] == '9') d[i] = 9;
//		if(s[i] >= 0 && s[i] <= 9) d[i] == s[i];
		if(s[i] == 'A') d[i] = 10;
		if(s[i] == 'B') d[i] = 11;
		if(s[i] == 'C') d[i] = 12;
		if(s[i] == 'D') d[i] = 13;
		if(s[i] == 'E') d[i] = 14;
		if(s[i] == 'F') d[i] = 15;
		sum += d[i] * c(n,j);
	}
	cin >> k;
	if(n == 10) cout<<sum;
	int i=0;
	for(;sum!=0;sum/=k)
	{
		i+=1;
		a[i]=sum%k;
	}
	for(;i>=1;--i) {
		if(a[i] >= 0 && a[i] <= 9) cout<<a[i];
		else{
			if(a[i] == 10) cout<<'A';
			if(a[i] == 11) cout<<'B';
			if(a[i] == 12) cout<<'C';
			if(a[i] == 13) cout<<'D';
			if(a[i] == 14) cout<<'E';
			if(a[i] == 15) cout<<'F';
		}
	}	
	return 0;
	
/*	int x,y;
	cin>>x>>y;
	cout<<c(x,y);
	return 0;
*/}
