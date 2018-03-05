//codevs
//я╟урвс╢╝╣дн╩жц
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Z,m;
	cin >> Z >> m;
	for(int i = 0;i <= Z.size() - 1;i ++)
	{
//		for(int j = i;j <= Z.size() - 1;j ++)
		{
			bool a = true;
			for(int x = 0,k = i;k <= i + m.size()-1;x ++,k ++)
			{
				if(m[x] != Z[k]/*||k != i + m.size()*/)
				{
					a = false;
				} 
			}
			if(a)
			{
				cout<<i + 1;
				return 0;
			}
		}
		
	}
	return 0;
}
