/*it is a code in wohch i'll be going outside the home, 
If the date will be even, the code is using continue statement  */

#include <iostream>
using namespace std;
int main()
{   
	for(int a=1; a<=30; a++)
	{
		if(a%2==0)
		{
			continue;
		}
	cout<<"Go outside "<<a<<endl;;	
	}
return 0;
}
