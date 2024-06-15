#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter your marks=";
	cin>>marks;
	
	if(marks>=90)
	cout<<"Congrats you got A grade";

	else if(marks>=80)
	cout<<"Congrats you got B grade";
	
	else if(marks>=70)
	cout<<"Congrats you got C grade";
	
	else if(marks>=60)
	cout<<"Congrats you got D grade";
	
	else
	cout<<"Try again you got F grade";
	
	return 0;

}
