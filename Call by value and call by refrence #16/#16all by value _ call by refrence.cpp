#include<iostream>
using namespace std;



//Functions can be called by two ways
//1-- Call by refrence------------>> 1-By refrence Pointer-->2-By Refrence variable
//2-- Call by Value







//******************------NORMAL CODE------**************************
//      in this code we are returning the value by function
/*void swap(int a, int b){
	              //temp a  b
	int temp = a; //4    4  5
	a = b;        //4    5  5
	b = temp;     //4    5  4
	cout<<"The value of A after swap is "<<a<<endl<<"The value of B is "<<b<<endl;
	
}

int main()
{
	int x,y;
	cout<<" Enter the value of A : ";
	cin>>x;
	cout<<"Enter the value of B : ";
	cin>>y;
	
	swap(x,y);
	return 0;
}*/


//******************------NOT SWAPING------**************************



//This code will not a and b
/*void swap (int a, int b){
	int temp = a;
	a = b;
	b = temp;
	
}
int main(){
	
	int a,b;
	cout<<"Enter the value of A : ";
	cin>>a;
	cout<<"Enter the value of B : ";
	cin>>b;
	cout<<" -----------------Before swap----------------------\n";
	cout<<"The value of A is "<<a<<endl<<"The value of B is "<<b<<endl;
	cout<<" -----------------After  swap----------------------\n";
	swap(a,b);
	//these are actual arguments (there value will be copied into the
	//function name swap (inhn koi farak bhi nhin pra ga sirf in ki value hi copy hogi)
	//there value will be remain same in this code) So this code will not swap  the 
	//values of a and b
	//swap is lia nhin hua kiunka hm nan function mn koi  value return nhin krwai
	cout<<"The value of A is "<<a<<endl<<"The value of B is "<<b<<endl;
	return 0;

}*/









//******************------POINTER METHOD------**************************
//*****************------Call by refrence-----**************************
/******************---Logic in google drive in the form of audio-----***
So in this code we will be giving the location of a and b in the by using (*) pointers
to locate the location of a and b in the memory and we will be using (&) to then call 
the location of a and b
*/
/*                                    // temp  a  b              
void swapPointer (int* a, int* b){  // temp  a  b    ******we are using int* to get the
	int temp = *a;                  // 4     4  5          adress
	// hm bd mn us adress ko bhi refrence kr ln ga, temp =*a(value at that adress)         
    *a =*b;                         // 4     5  5
	*b= temp;                       // 4     5  4
	                         
}
int main(){
	
	int a,b;
	cout<<"Enter the value of A : ";
	cin>>a;
	cout<<"Enter the value of B : ";
	cin>>b;
	cout<<" -----------------Before swap----------------------\n";
	cout<<"The value of A is "<<a<<endl<<"The value of B is "<<b<<endl;
	cout<<" -----------------After  swap----------------------\n";
	swapPointer(&a,&b);//we are using & to get adress
	cout<<"The value of A is "<<a<<endl<<"The value of B is "<<b<<endl;
	return 0;

	
}*/
/*
Ya code is lia work kr rha ha kiunka a,b ki location to memory mn same hi rehti ha 
So, hmara function location ki mdad sa dhund kr usa change kr da ga,
*/

//********------CALL BY REFRENCE USING C++ REFRENCE VARIABLE-----------*********


void swapRefrenceVar(int &a, int &b){//a is pointing x in memory and b is pointing y 
                     //in memory(islia ya refrence variable actual change la ayn ga) 
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	
	int x,y;
	cout<<"Enter the value of A : ";
	cin>>x;
	cout<<"Enter the value of B : ";
	cin>>y;
	cout<<" -----------------Before swap----------------------\n";
	cout<<"The value of A is "<<x<<endl<<"The value of B is "<<y<<endl;
	cout<<" -----------------After  swap----------------------\n";
	swapRefrenceVar(x,y);
	cout<<"The value of A is "<<x<<endl<<"The value of B is "<<y<<endl;
	return 0;
}
