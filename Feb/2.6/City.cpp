#include <bits/stdc++.h>
using namespace std;
int M[9][9] = { {0,0,0,0,0,0,0,0,0},
				{0,1,0,0,0,1,0,1,1},
				{0,0,1,1,1,1,0,1,1},
				{0,0,1,1,0,0,1,1,1},
				{0,0,1,0,1,1,1,0,1},
				{0,1,1,0,1,1,1,0,0},
				{0,0,0,1,1,1,1,1,0},
				{0,1,1,1,0,0,1,1,0},
				{0,1,1,1,1,0,0,0,1}};
int a[101],b[101];
bool s[9];
int out(int d)
{
	cout << char(a[d] + 64);
	while(b[d]){
		d = b[d];
		cout << "←"	 << char(a[d] + 64);
	}
}
void doit()
{
	int head = 0,tail = 1,i;
	a[1] = 1;
	b[1] = 0;
	s[1] = 1;
	do{
		head ++;
		for(int i = 1;i <= 8;i ++){
			if(!M[a[head]][i] && !s[i]){
				tail ++;
				a[tail] = i;
				s[i] = 1;
				b[tail] = head;
				if(i == 8){
					out(tail);head = tail;break;
				}
			}
		}
	}while(head < tail);
}
int main()
{
	memset(s,false,sizeof(s));
	doit();
	return 0;
}
