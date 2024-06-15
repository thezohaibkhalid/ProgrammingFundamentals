//find prime numbers using while,
#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=1;
	cout<<"Enter Your maximum number = ";
    cin>>n;
	
	while(i<n)
	{
		if(i%2==0)
		{
	        false;
		}
		else if(i%3==0)
		{
			false;
		}
		else if(i%5==0)
		{
			false;
		}
		else 
		{
			cout<<i<<endl;
		}
	i++;
	}
	return 0;
}
