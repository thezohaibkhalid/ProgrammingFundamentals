#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3,smallest;
	cout<<"Enter three numbers = ";
	cin>>num1>>num2>>num3;
	
	if(num1<num2)
	{
		if(num1<num3)
		{
			smallest=num1;
		}
	}
	else
	{
		if(num2<num3)
		{
			smallest=num2;
		}else
		{
			smallest=num3;
		}
	} 
	cout<<smallest;
	
return 0;
}
