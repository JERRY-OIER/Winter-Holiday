#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

char a[10000][5000];
/*int main()
{
	string a[10000];
	string b;
 	int i=0;
 	while(getline(cin,b))
 	for(;i>=1;i--)
 	{
 		cout<<a[i];
 	}
	return 0;
}*/

bool read(int j) {
	int i = 0;
	while(char c = getchar()) {
		if(c == ' ' || c == '\n') {
			if(i == 0) {
				return false;
			}
			else
				return true;
		}
		else
			a[j][i++] = c;
	}
	return true;
}

int main() {
	int j = 0;
	while(read(j)){
		j++;
	}
	
}
