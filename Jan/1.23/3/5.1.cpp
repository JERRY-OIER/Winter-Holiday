#include <iostream>
using namespace std;
int main()
{
	int j,n=2,i,k=0;
	cin>>j;
	for(;n<=j;n++)
	{
		for(i=2;i<n;i++) 
			{
				if(n%i!=0) k++;	 	
			}
		if(k==n-2)
			{
				k=0;
				cout<<n<<"  ";
			}
		else k=0;
			
	}
	
    return 0;
}
