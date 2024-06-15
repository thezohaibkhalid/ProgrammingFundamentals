#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter your Max Number";
	cin>>n;
	
	for(int i=1; i<n; i++)
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
	}
}
