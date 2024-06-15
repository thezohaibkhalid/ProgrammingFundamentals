#include<iostream>
using namespace std;
int main()
{
	int unit;
	cout<<"Your Units";
	cin>>unit;
	
	if(unit<=100){
	 cout<<"Your Bill is";                      /* 1 - 100 - 4/=
	                                            101 - 300 - 4.50/=
                                             	301 - 400 - 4.75/=
	                                            above 500 - 5=/*/
	 cout<<100*4;
	}
	else if(unit<=300){
		cout<<"Your Bill is";
		cout<<(100*4)+(unit-100)*4.50;
	}
	else if(unit<=500){
		cout<<"your bill is";
		cout<<(100*4)+(200*4.50)+(unit-300)*4.75;
	}
	else if( unit >= 500)
	 {
	cout<<"your bill is";
	cout<<(( 100*4)+(200*4.50)+(100*4.75)+(unit -400)*4.75)();
	}

}
