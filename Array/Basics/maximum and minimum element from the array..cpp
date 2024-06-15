/*In this question we will an array from the user and then, 
we'll be printing the maximum and minimum element from the array.
*/
#include<iostream>
// #include<climits>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the vlaue of the array = ";
	cin>>n;
	int arr[n];
	for(int i=0; i<n;i++){
		cin>>arr[i];
	}

	for(int i=1;i<n;i++){
		if(arr[n]<arr[0]){
			arr[n]=arr[0];
		}cout<<arr[n];
	}

	/*int maxNo= INT_MIN ;
	int minNo= INT_MAX ;
	for(int i=0; i<n; i++){

	if(arr[i]>maxNo){
		maxNo=arr[i];
	}
	if(arr[i]<minNo){
		minNo=arr[i];
	}
	cout<<"Maximum no = "<<maxNo<<endl;
	cout<<"Minimum no = "<<minNo<<endl;
	maxNo=max(maxNo,arr[i]);
	minNo=min(minNo,arr[i]);

	cout<<maxNo<<" "<<minNo<<endl;
    }*/
    return 0;
}
