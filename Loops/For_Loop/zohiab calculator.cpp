#include<iostream>
using namespace std;
int main()
{
	char z;
	cout<<"Select the operation: +,-,*./     ";
	cin>>z;
	float num1,num2;
	cin>>num1>>num2;
	
	switch(z){
	
	
	   case'+':
	   cout<<" num1 "<<" + "<<" num2 "<<" =  "<< num1 + num2;
	   break;
	   
	   case'-':
	   cout<<" num1 "<<" - "<<" num2 "<<" =  "<< num1 - num2;
	   break;
	   
	   case'*':
	   cout<<" num1 "<<" * "<<" num2"<<" =  "<< num1 * num2;
	   break;
	   
	   case'/':
	   cout<<" num1 "<<" / "<<" num2 "<<" =  "<< num1 / num2;
	   break;
	   
	   default:
	   cout<<"Wrong operator selected";
	   break;
}
return 0;
}
