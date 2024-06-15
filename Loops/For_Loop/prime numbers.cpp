#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	
	
	for(x=2; x<=1000; x++)
	{
	    z=0;
		for(y=2; y<=x; y++)
		{
			if(x%y==0){
				z++;
			}
		}
		if(z==2)
	{
		cout<<x<<endl;
	}
	}
	
system("pause>0");
return 0;	
}
