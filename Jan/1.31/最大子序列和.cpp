#include<iostream> 
using namespace std;
int main()
{
	freopen("maxsum.in","r",stdin);
	int N;
	cin >> N;
	int num[N + 1];
	for(int i = 1;i <= N;i ++)
	{
		cin >> num [i];
	}
	int summax = 0,sum = 0;
	for(int j = 1;j <= N;j ++)
	{
		sum += num[j];
		if(sum <= 0)//if(都是负数？) 
		{
			sum = 0;
			continue;
		}
		if(summax < sum)
		{
			summax = sum;
		}
	}
	cout << summax;
 	return 0;
}
