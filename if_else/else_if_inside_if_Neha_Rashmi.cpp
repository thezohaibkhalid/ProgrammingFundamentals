#include <iostream>
using namespace std;
int main()
{
	int savings;
	cout<<"Enter Your Amount";
	cin>>savings;
	if (savings>5000) {
		if (savings>10000){
			cout<<"Muree Trip with Neha\n";
		} else{
			cout<<"shopping with Neha\n";
		}
	} else if (savings>2000){
		cout<<"Rashmi\n";
	}else {
		cout<<"Friends\n";
	}
	return 0;
}
