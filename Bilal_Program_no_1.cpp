#include <iostream>
using namespace std;
int main()
{
	int ict,total_marks;
	cout<<"Enter ict marks";
	cin>>ict;
	cin>>total_marks;
	total_marks=((ict/100)*100);
	if(total_marks>=90){
		cout<<"A grade.\n";
	}
	else{
		cout<<"not good.\n";
	}
}
