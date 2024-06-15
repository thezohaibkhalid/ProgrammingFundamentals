#include<iostream>
using namespace std;
int main()
{
	int a,n;
	cout<<"enter the value of array 1";
	cin>>a;
	cout<<"ENter the value of array 2";
	cin>>n;
	
	int arr1[a], arr2[n];
	
	cout<<"Enter the numbers of array 1 = ";
	
	for(int i=0; i<a; i++){
		cin>>arr1[i];
	}
	
	
	cout<<"ENter the value of 2nd array = ";
	for(int i=0; i<n; i++){
		cin>>arr2[i];
	}
	
	arr1[a]=arr2[n];
	cout<<arr2[n];
}
