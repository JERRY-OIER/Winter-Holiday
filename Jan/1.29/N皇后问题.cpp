/* N�ʺ����� */
#include<bits/stdc++.h>
using namespace std;

bool use[100];//��ʾ�Ƿ��ù�
int N; 
int ans = 0;
int z[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
bool a = true;bool b = true;
void Queen(int x)
{
	if(x == N+1)//�ݹ���ֹ���� 
	{
		ans ++ ;
		return ; 
	}

	for(int i = 1;i <= N;i ++)
	{	
		a=b=true;
		
		if(use[i] == 0)//�жϴ����Ƿ��ù� 
		{	
			
			for(int k = 1;k < x;k ++ )//�ж϶Խ���1�Ƿ��ù� 
			{
				if( ( i - x ) == ( z[k] - k ) )
					a = false;
			}
			if(a)
			{ 
				for ( int k = 1;k < x;k ++ )//�ж϶Խ���2�Ƿ��ù�
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
