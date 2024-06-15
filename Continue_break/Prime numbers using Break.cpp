#include<iostream>
using namespace std;
int main()
{
	int i;
	int n;
	cout<<"Enter Your number = "<<endl;
	
	for(i=2; i<n; i++)
	{
		if (n%i==0)
		{
			cout<<n<<"Is Prime";
			break;
		}
		}
	}
	if(i==n)
	{
		cout<<n<<"Is Prime";
	}
}
