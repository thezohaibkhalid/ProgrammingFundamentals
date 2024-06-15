//Print positive numbers using while
/*{declare intiger
while(condition){
C++ statment;
i++;}
}*/
#include<iostream>
using namespace std;
int main()
{
	int i=1;
	int a;
	cout<<"Enter your number = ";
	cin>>a;
	
	while(i<=a)
	{
		if(i%2==0)
		{
			cout<<i<<endl;
		}
     i++;
	}
	
} 
