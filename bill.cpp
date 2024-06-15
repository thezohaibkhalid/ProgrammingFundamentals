#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Unit : ";
	cin>>a;
	
	b=25;
	if(a>=100)
	b=30;
	if(a>=500)
	b=35;
	
	c=a*b;
	cout<<endl<<c;
	return 0;
}
