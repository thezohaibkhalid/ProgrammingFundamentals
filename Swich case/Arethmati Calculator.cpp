// Code to make a simple C++ calculator that performs Arethmatic operations using switch,case,break:

#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter your numbers = ";
	cin>>num1>>num2;
	
	char op;
	cout<<"Enter an Operator = ";
	cin>>op;
	
	
	switch(op)
	{
	case '+':
		cout<<num1+num2<<endl;
	break;
	
	case '-':
		cout<<num1-num2<<endl;
	break;
	
	case'/':
		cout<<num1/num2<<endl;
	break;
	
	case '*':
	    cout<<num1*num2<<endl;
	break;
	
	default:
	    cout<<"Wrong operator selected ";		
	}
}
