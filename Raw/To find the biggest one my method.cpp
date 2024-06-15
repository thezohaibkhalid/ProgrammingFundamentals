//To find biggest from 3 numbers another method,
#include <iostream>
using namespace std;
int main()	
{
	int num1,num2,num3;
	cout<<"Enter Your Number";
	cin>>num1>>num2>>num3;
	
	if(num1>num2 && num1>num3){
		cout<<num1<<endl;
	}
	else if(num2>num3 && num2>num1){
		cout<<num2<<endl;
	}
	else{
		cout<<num3<<endl;
	}
}
