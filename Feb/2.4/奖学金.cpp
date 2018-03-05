#include <bits/stdc++.h>
using namespace std;
int stu[10000][10];
bool used[10000];
int N;
int f()
{
	int max_s = 0,max_n;
	for( int i = 1;i <= N;i ++){
		if(stu[i][0] >= max_s && !used[i]){
			if(stu[i][0] == stu[max_s][0]){
				if(stu[i][1] < stu[max_n][1]){
					continue;
				}
				else{
					max_s = stu[i][0];
					max_n = i;	
				}
			}
			else {
				max_s = stu[i][0];
				max_n = i;
			}
		}
	}
/*	for(int l = 1;l <= N;l ++){
		if(i == l) continue;
		else{
			if(stu[i][0] == stu[l][0]){
				if(stu[i][1] > stu[l][1]){
					max_n = i;
				}
				else{
					if(stu[i][1] < stu[l][1]){
						max_n = l;
					}
					else {
						if(l < i) max_n = l;
						else max_n = i;
					}
				}
			}
		}
	}*/
	used[max_n] = true;
//	cout <<"   ____   "<< max_n;
	return max_n; 
}
int main()
{
	
	freopen("scholar.in","r",stdin);
	cin >> N;
//	printf("%d\n",N);
	for(int i=1;i <= N;i ++){
		cin>>stu[i][1]>>stu[i][2]>>stu[i][3];
		//cout<<"QWQ"<< stu[i][1]<< stu[i][2] <<" " << stu[i][3] <<"\n";
		//system("cls");	
	}
	/*for(int i = 1;i <= N;i ++){
		cin >> stu[i][1] >> stu[i][2] >> stu[i][3];
		cout <<"  ____  "<< stu[i][1] <<" " << stu[i][2] <<" " << stu[i][3] <<" " <<"{}{}{}{}{}\n";
	
	
	}*/
	for(int i = 1;i <= N;i ++)	stu[i][0] = stu[i][1] + stu[i][2] + stu[i][3];
	for(int s = 1,k;s <= 5;s ++){
		k = f();
		cout<<k<<" "<<stu[k][0]<<endl;
	}
	return 0;
}
