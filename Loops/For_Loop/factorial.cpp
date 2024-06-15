#include<iostream>
using namespace std;
int main()
{
	int x=0,y=1,total=1;
	cout<<"Enter the number = ";
	cin>>x;
	
	
	do{
		total*=y;
	y++;
	}
	while(y<=x){
	}
		cout<<total;
		return 0;

}
