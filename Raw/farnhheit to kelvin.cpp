//F = 1.8*(K-273) + 32
#include<iostream>
using namespace std;
int main()
{
	int temp,far;
	cout<<"Enter the Temprature in kelvin = ";
	cin>>temp;
	
	far=((1.8*(temp-273))+32);
	cout<<"Temprature in Farenheit "<<far;
	
}
