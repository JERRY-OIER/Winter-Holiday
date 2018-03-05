//2018.2.2__8:30 ~ 9:30
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
string s;
int ans = 0;
void get(int begin,int end)
{
	if(ans == 80){
		ans = 0;
		cout<<endl;
	}
	if(begin == end)
	{
		cout << s[begin], ans++;
		return;
	}
	if(s[begin] == s[end])
	{
		for(int i = begin,j=end;i <= end && j >= begin; i ++, j -- )
		{
			if(s[i] == s[j]) {
				if(i >= j - 1 ) 
				{
					cout << s[begin];ans++;
					get(begin+1,end);return;
				}
				 //else continue;
			}
			else {
				if(s[i] < s[j])
				{
					cout << s[begin];ans++;
					get(begin+1,end);return;
				}
				else
				{
					cout << s[end];ans++;
					get(begin,end-1);return;
				}
			}
		}
	}
	else
		if(s[begin] < s[end])
		{
			cout << s[begin];ans++;
			get(begin+1,end);//return;
		}  
		else 
		{
			cout << s[end];ans++;
			get(begin,end-1);//return;
		}
}

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int N,i;

	cin >> N;
	for(i = 0;i < N;i ++ ) cin >> s[i];
	get(0,N-1);
	return 0;
}
