#include<iostream>
using namespace std;
int main()
{
	int units , rate , bill;
	cout<<"Enter units consumed=";
	cin>>units;
	
	rate=5;
	if(units>100)
	rate=10;
	if(units>500)
	rate=15;
	
	bill=units*rate;
	cout<<"Your electricity bill is "<<bill<<"Rs.";
	
	return 0;
}
