#include<iostream>
using namespace std;
int up[310] [310];
int num [301] [301];
int main()
{
	freopen("maxes_stack.in","r",stdin);
//=======================定义==========================	
	int N,sum_max = 0,sum = 0;
	cin >> N;
																//*********************
//=======================输入==========================			//*   j1 j2 j3 ... jn *
	for(int i = 1;i <= N;i ++)                         			//*i1  .  .  .  .  .  *
	{              									   			//*i2		    	  *
		for(int j = 1;j <= N;j ++)					   			//*i3		 		  *
		{											   			//*... 				  *
			cin >> num[i][j];						   			//*in				  *
		}														//*********************
	}
//=======================赋值========================== 
	for(int j = 1;j <= N;j ++)
	{
		for(int i = 1;i <= N;i ++)
		{
			up[i][j] = num[i][j] + up[i-1][j];
		}
	}
//----------------------------------------------------- 
	for(int x = 0;x <= N - 1;x ++)//控制向下行数 
		{
			for(int i = 1;i <= N - x;i ++)
			{
				for(int j = 1;j <= N;j ++)
				{
					sum += up[i+x][j] - up[i-1][j];
					if(sum < 0)
					{
						sum = 0;
					}
					if(sum_max < sum)
					{
						sum_max = sum;	
					}
				}
				sum = 0;
			}
			
		}
//=====================================================
	cout<<sum_max;
	return 0;
}
