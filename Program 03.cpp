#include<iostream>
using namespace std;
int main()
{
	int units , rate , bill , tax , line_r ,tot;
	cout<<"Enter units consumed=";
	cin>>units;
	
	line_r=500;
	rate=5;
	if(units>100)
	rate=10;
	if(units>500)
	rate=15;
	
	bill=units*rate;
	tax=(bill*5)/100;
	if(bill>=2000)
	{
		tot=bill+tax+line_r;
		cout<<"A 5% tax is added to your bill \nbecause your bill exeeds 2000"<<endl;
	}
	else
	{
		tot=bill+line_r;
	}
	cout<<"Your electricity bill is "<<tot<<"Rs.";
	return 0;
}
