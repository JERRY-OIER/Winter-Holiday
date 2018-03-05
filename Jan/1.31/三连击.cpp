#include<iostream>
#include<cstring>
using namespace std;
//min max==333 (+1); min min==129 (-1)
int main()
{
	int a[10];bool s;
	for(int i = 128;i <= 333;i ++)
	{
	    s=true;
		a[1]=i%10;
        a[2]=i%100/10;
        a[3]=i/100;
        a[4]=2*i%10;
        a[5]=2*i%100/10;
        a[6]=2*i/100;
        a[7]=3*i%10;
        a[8]=3*i%100/10;
        a[9]=3*i/100;
        for(int j = 1;j <= 8;j ++)
        {
        	for(int k = j+1;k<=9;k++)
        	{
        		for(int x=k;x<=k;x++)
        		{
        			if(a[j] == a[x]) s = false;		
        		}
        	}
			
        }	
		if(s)
		{
			cout<<i<<" "<<i*2<<" "<<i*3<<endl;
		}
	}
	return 0;
}
/*#include<iostream>
#include<algorithm>
using namespace std;

int i,j,a[15];
bool ans;
int main()
{
    for (i=123;i<=329;i++)
    {
        a[1]=i%10;
        a[2]=i%100/10;
        a[3]=i/100;
        a[4]=2*i%10;
        a[5]=2*i%100/10;
        a[6]=2*i/100;
        a[7]=3*i%10;
        a[8]=3*i%100/10;
        a[9]=3*i/100;
        sort(a+1,a+10);
        ans=true;
        for (j=1;j<=9;j++) if (a[j]!=j) ans=false;
        if (ans) cout<<i<<" "<<i*2<<" "<<i*3<<endl;
    }
    return 0;
}*/
