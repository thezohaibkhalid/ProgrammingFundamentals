#include<iostream>
using namespace std;
int calculaterRemainder(int divisor, int dividend){
	

    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    cout<<" Quotient is : "<<quotient;
    cout<<" Remainder is :"<<remainder;
	
}
	
int main(){
	int divisor,dividened;
	cout<<"Enter the dividor : ";
	cin>>divisor;
	cout << "Enter divisor: ";
    cin >> dividened;
    
    calculaterRemainder(divisor,dividened);
    
    return 0;
    
}

