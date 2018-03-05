#include <bits/stdc++.h>
using namespace std;
const int MAXN = 101; 
struct STU{
	string Name;
	int FE;
	int CS;
	char P;
	char W;
	int M;
	int A;
};
STU per[MAXN];
int main()
{
	int n,max_A = 0,sum = 0,r;
	cin >> n;
	for(int i = 1;i <= n;i ++){
		cin >> per[i].Name >> per[i].FE >> per[i].CS >> per[i].P >> per[i].W >> per[i].M;
		if(per[i].FE > 80 && per[i].M >= 1) per[i].A += 8000;
		if(per[i].FE > 85 && per[i].CS > 80) per[i].A += 4000;
		if(per[i].FE > 90 ) per[i].A += 2000;
		if(per[i].W =='Y' && per[i].FE > 85) per[i].A += 1000;
		if(per[i].CS > 80 && per[i].P == 'Y') per[i].A += 850; 
	}
	for(int j = 1;j <= n;j ++){
		if(max_A < per[j].A) {
			max_A = per[j].A;
			r = j;
		}
		sum += per[j].A;
	}
	cout << per[r].Name << endl << per[r].A << endl << sum;
	return 0;
}
