#include<iostream>
using namespace std;
#define pi 3.1415
int main()
{
	float radius , c_ference , area ;
	int choice;
	
	cout<<"Enter the radius of circle=";
	cin>>radius;
	
	cout<<"What do you want to calculate?\nchoose 1 or 2"<<endl;
	cout<<"1.Area of circle"<<endl;
	cout<<"2.Circumference of circle"<<endl;
	cout<<"Enter your choice=";
	cin>>choice;
	
	area=pi*radius;
	c_ference=2*pi*radius;
	
	if(choice==1)
    cout<<"Area of circle is"<<area;
	else if(choice==2)
	cout<<"Circumference of circle is"<<c_ference;
	else
	cout<<"You entered wrong choice\nTry again";
	return 0;
}
