#include<iostream>
using namespace std;
int main()
{
	char c,k,f,x;
	cout<<"Select Your Temprature scale = k,f,c,";
	cin>>x;

	float a;
	cout<<"Enter your Temprature";
	cin>>a;
	
	if(x=="c"){
	switch(c)
	{
	case'k':
	cout<<K=(a+273.15);
	break;
	case'f'
	cout<<F=(a(9/5)+32);
	break;
	}
	}
	else if(k)
	{
	switch(k){
	case'c':
	cout<<C=(a-273.15);
	break;
	case'f':
	cout<<K=((a-273.15)*1.8)+32;
	break			
	}
	}
	else if(f){
	case'c':
	cout<<C=(a-32)*(5/9);
	break;
	case'k':
	cout<<F=(a-32)*(5/9)+273.15;
	break;
	}
	
return 0;
}
