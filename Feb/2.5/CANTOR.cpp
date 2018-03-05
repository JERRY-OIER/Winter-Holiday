#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
	if( x < y){
		int a = x;x = y;y = a;
	}
	if(y == 0) return x;
	else gcd(y,x%y);
}
int main()
{
	int m,m1,m2,z,z1,z2;
	char g1,g2;
	cin >> z1 >> g1 >> m1;
	cin >> z2 >> g2 >> m2;
	z = z1 * z2;
	m = m1 * m2;
	int k = gcd(m,z);
	m /= k;
	z /= k;
	cout << m << " " << z;
	return 0;
}
