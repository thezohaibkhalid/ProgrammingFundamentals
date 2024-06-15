#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arrSize;
	cout<<"Enter a arry size";
	cin>>arrSize;
	
	
	int myNum[arrSize], sum;
	
	for(int i=0; i<arrSize; i++){
		cout<<"Enter a value of array  = "<<i+1<<":";
		cin>>myNum[i];
		sum+=myNum[i];
		
	}
cout<<"Sum:  "<<sum;	
getch();
return 0;
}
