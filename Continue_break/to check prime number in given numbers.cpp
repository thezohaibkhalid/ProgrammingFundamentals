#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter your number =  ";
	cin>>a>>b;
	
	/*we will be using two for loops.
	1st for loop will be from number given to b.
	and
	Secound loop will be from i=2 to num-1*/
	
	for(int num=a;num<a;num++){
		int i;
		for(i=2; i<num; i++){
			if(num%i==0){
				break;
			}
		if(num=i){
			cout<<num<<endl;
		}	
			
		}
	}
}
