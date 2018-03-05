#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N,s;
	cin >> N;
	bool a = true;
	for(s = 1 ; s * s <= N + 1 ; s ++)
	for(int i = 2 ; i <= s ; i ++){
		if(N % i == 0) a = false;
	}
	if(a)
	cout<<"\\t";
	else
	cout<<"\\n";
	return 0;
}
