#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter the Value of A";
	cin>>a;
	cout<<"Enter the value of B";
	cin>>b;
	cout<<"Enter the value of C";
	cin>>c;
	cout<<"Enter the value of D";
	cin>>d;
	
	if(a>b){
		if(a>c){
			if(a>d){
				cout<<"A is greatest";
			}
		}
	}
	
	else if(b>a){
		if(b>c){
			if(b>d){
					cout<<"B is Greatest";
				}
			
		}
	}
		
	else if(c>a){
	        if(c>b){
			if(c>d){
			cout<<"C id greatest";
			}
		}
	}
		
	
	
	else {
				cout<<"D is Greatest";
			}
		
	return 0;
}
