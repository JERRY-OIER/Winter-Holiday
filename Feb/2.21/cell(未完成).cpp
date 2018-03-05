#include <instream>
#include <outstream>
#include <cstdio>
#include <cstdlib>
using namespace std;
const int MAXN = 1000;
int cell[MAXN][MAXN],
	dx[4] = {-1,0,1,0},
	dy[4] = {0,-1,0,1},
	x[MAXN],
	y[MAXN],
	M,N,mun = 0;
char s;
void IN()
{
	cin >> M >> N;
	for(int i = 0;i <= M - 1;i ++)
		for(int j = 0;j <= N - 1;j ++)
			cell[i][j] = 1;
	for(int i = 0;i <= M;i ++){
		gets(s);
		for(int j = 0;j <= N - 1;j ++){
			if(s[j] == '0'){
				cell[i][j] = 0;
			} 
		}
	}
}
int BFS(int p,int q)
{
	int head = 0,tail = 1
	num ++;
	while(head != tail){
		for(int i = 0;i <= 4;i ++){
			if()
		}
	}
}
int main()
{
	IN();
	
	return 0;
}
