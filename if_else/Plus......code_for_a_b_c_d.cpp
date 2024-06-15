#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d;
	int sum,division,multiplication,substraction;
	cout<<"declare four integers";
	cin>>a>>b>>c>>d;
	division=a/b;
	substraction=a-b-c-d;
	multiplication=a*b*c*d;
	sum=a+b+c+d;
	cout<< "division is"<<division<<endl;
	cout<< "multiplication is"<<multiplication<<endl;
	cout<< "substraction is" <<substraction<<endl;
	cout<< "sum is "<<sum<<endl;
	return 0;
}
