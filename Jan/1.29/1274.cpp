#include<iostream>
using namespace std;
int main()
{
	int car,m;
	cout<<"Enter the speed limit:";
	cin>>m;
	cout<<"Enter the recorded speed of the car:";
	cin>>car;
	if(car-m<=0) cout<<"Congratulations, you are within the speed limit";
	else{
		if(car-m>=1&&car-m<=20)
			cout<<"You are speeding and your fine is $ 100";
		if(car-m>=21&&car-m<=30)
			cout<<"You are speeding and your fine is $ 270";
		if(car-m>=30)
			cout<<"You are speeding and your fine is $ 500";
		
	}
	return 0;
} 
