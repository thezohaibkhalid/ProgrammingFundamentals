#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int sum,b=0;
	int mynum[10]={10,20,30,12,13,14,15,26,27,28};

	for(int i=0; i<10; i++){
	//cout<<mynum[i]<<endl;
    sum+=mynum[i];
    }
    cout<<sum;

   
    getch();
    return 0;
}



