#include<iostream>
using namespace std;
int main()
{
	int linearSearch (int arr[], int n, int key){
			for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
	
	}
	
	
	int n;
	cout<<"Enter the number = ";
	cin>>n;
	
	
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	
	int key;
	cout<<"Enter your key : ";
	cin>>key;
	
	cout<<linearSearch(arr, key, n)<<endl;
	

}
