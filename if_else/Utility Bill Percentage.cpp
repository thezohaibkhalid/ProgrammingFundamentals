#include<iostream>
using namespace std;
int main()
{
	
	int unit,bill,tax,fuel,total;
	
	cout<<"Your Units";
	cin>>unit;
	
	if(unit<=100){
	 bill=100*4;
	}
	else if(unit<=300){
		bill=(100*4)+(unit-100)*4.50;
	}
	else if(unit<=500){
		bill=(100*4)+(200*4.50)+(unit-300)*4.75;
	}
	else if( unit >= 500)
	 {
	bill=(( 100*4)+(200*4.50)+(100*4.75)+(unit -400)*5);
	}
	
	tax=(bill*10)/100;
	fuel=(bill*20)/100;
	total=(bill+tax+fuel);
	
	cout<<"Your electricity cost is = "<<bill<<endl;
	cout<<"Govt tax is "<<tax<<endl;
	cout<<"Fuel adjutement tax is = "<<fuel<<endl;

	cout<<"Your total bill is = "<<total;

	
}
