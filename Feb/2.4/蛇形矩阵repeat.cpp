//蛇形矩阵
#include <bits/stdc++.h>
using namespace std;
int z[3000][3000];
int sum = 0;
int main()
{
	int N,x,y;
	cin >> N;
	for(int i = 0;i <= N + 1;i ++){
		z[0][i] = 1;
		z[i][0] = 1;
		z[N + 1][i] = 1;
		z[i][N + 1] = 1; 
	}
	if(N % 2 == 0){
		x = 1;
		y = 1;
	for(int i = N * N;i >= 1;){
		while(z[x][y] == 0){//right
			z[x][y] = i;if(x == y || x + y == N + 1) sum += i;
			y ++;
			i --;
		}
		y -= 1;
		x -= 1;
		sum += i;
		while(z[x][y] == 0){//up
			z[x][y] = i;if(x == y || x + y == N + 1) sum += i;//cout<<"S"<<sum<<" ";
			x --;
			i --;
		}
		x += 1;
		y -= 1;
		sum += i;
		while(z[x][y] == 0){//left
			z[x][y] = i;if(x == y || x + y == N + 1) sum += i;//cout<<"S"<<sum<<" ";
			y --;
			i --;
		}
		y += 1;
		x += 1;
		sum += i;
		while(z[x][y] == 0){//down
			z[x][y] = i;if(x == y || x + y == N + 1) sum += i;//cout<<"S"<<sum<<" ";
			x ++;
			i --;
		}
		x -= 1;
		y += 1;
		sum += i;
	}

	}
	else {
		x = N;
		y = N;
		for(int i = N * N;i >= 1;){
		
		while(z[x][y] == 0){//left
			z[x][y] = i;if(x == y || x + y == N + 1) sum += i;
			y --;
			i --;
		}
		y += 1;
		x -= 1;
		while(z[x][y] == 0){//up
			z[x][y] = i;if(x == y || x + y == N + 1) sum += i;
			x --;
			i --;
		}
		x += 1;
		y += 1;
		
		while(z[x][y] == 0){//right
			z[x][y] = i;if(x == y || x + y == N + 1) sum += i;
			y ++;
			i --;
		}
		y -= 1;
		x += 1;
		while(z[x][y] == 0){//down
			z[x][y] = i;if(x == y || x + y == N + 1) sum += i;
			x ++;
			i --;
		}
		x -= 1;
		y -= 1;
	}

	}
/*		for(int i=1,y=1,x=1;i<=N*N;)//from 15~33 为赋值部分 
		{
		while(z[x][y]==0)//right
		{
			z[x][y]=i;y++;i++;
		}
		y-=1;x+=1;
		while(z[x][y]==0)//down
		{
			z[x][y]=i;x++;i++;
		}
		x-=1;y-=1;
		while(z[x][y]==0)//left
		{
			z[x][y]=i;y--;i++;
		}
		y+=1;x-=1;
		while(z[x][y]==0)//up
		{
			z[x][y]=i;x--;i++;
		}
		x+=1;y+=1;
		}
*/	for(int p = 1;p <= N;p ++){
		for(int q = 1;q <= N;q ++){
			cout<<z[p][q]<<" ";
		}
		cout<<endl;
	}
	cout << sum;
	return 0;
} 
