/* N皇后问题 */
#include<bits/stdc++.h>
using namespace std;

bool use[100];//表示是否用过
int N; 
int ans = 0;
int z[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
bool a = true;bool b = true;
void Queen(int x)
{
	if(x == N+1)//递归终止条件 
	{
		ans ++ ;
		return ; 
	}

	for(int i = 1;i <= N;i ++)
	{	
		a=b=true;
		
		if(use[i] == 0)//判断此行是否用过 
		{	
			
			for(int k = 1;k < x;k ++ )//判断对角线1是否用过 
			{
				if( ( i - x ) == ( z[k] - k ) )
					a = false;
			}
			if(a)
			{ 
				for ( int k = 1;k < x;k ++ )//判断对角线2是否用过
				{
					
					if( ( x + i ) == ( z[k] + k ) )
						b = false;
				}				
				if(b)
				{
					use[i] = 1;
					z[x]=i;
					Queen(x+1);
					use[i] = 0;
					z[x] = 0;
				}
	
			}
	
		}	
			
	}

}

int main()
{
	
	cin>>N;
	Queen(1);
	cout<<ans;
	return 0;
} 
