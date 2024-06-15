#include<iostream>
using namespace std;
int main(){
	int size,mid,search;
//	cout<<"Enter size";
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int high=arr[10],low=arr[0];
	mid=(low+high)/2;
	cout<<"Enter the value to find = ";
	cin>>search;
	for(int i = 0; i<10; i++){
      if (mid<search){
      	   cout<<"Value found";
      	   break;
	  }else{
	  	cout<<"Value not found";
	  	break;
	  }
	}
	return 0;
}

