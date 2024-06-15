#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number = ";
	cin>>n;
	
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for(int i=1;i<n;i++){
		if(arr[0]<arr[i]){ //we're using < sign to find the heighest value
			arr[i]=arr[0];
		}
		cout<<arr[i]<<endl;
	}
}
