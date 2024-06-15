#include<iostream>
using namespace std;
int main()
{
	int salary , grade , bonus , total;
	
	cout<<"Enter your salary=";
	cin>>salary;
	cout<<"Enter your grade=";
	cin>>grade;
	
	if(grade>=17)
	bonus=(salary*50)/100;
	else
	bonus=(salary*10)/100;
	total=salary+bonus;
	cout<<"Your total salary is "<<total;
	return 0;
}
