#include<iostream>
using namespace std;
int main()
{
	int  n;
	cout<<"Enter any number";
	cin>>n;
	
	int x; sum=0;
	for(  ; n>0;  ;)
	{
		x=n%10;
		n=n/10;
		
		sum=sum+x;
	}
	cout<<"Addition of given  number is "<<sum;
return 0;	
}
