#include<iostream>
using namespace std;
int main()
{
	int x,y;
	
	
	for(x=2; x<=1000; ++x)
	{
	    int z=0;
		for(y=2; y<=x; y++)
		{
			if(x%y==0)
			{
				z=1;
			}
		}
		if(z=0)
	{
		cout<<x<<endl;
	}
	}
	
return 0;	
}
