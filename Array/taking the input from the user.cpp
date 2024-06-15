h/*In this code we'll be taking the size of the array and the numbers in the array from the user.
It's IMP*/

#include<iostream>
using namespace std;
int main()
{
	int n;  //Taking the input from the user.
	cout<<"Enter the size of the array = ";
	cin>>n;
	int array[n]; //using n at the place of number so that user can give the input.
	
	/*here in this case we can declare the array's for the given specific numbers like this
	int array[n];
	cin>>array[0];
	cin>>array[1];
	cin>>array[2];
	cin>>array[3];
	cin>>array[4];
	
	Or we can simply use a for loop to add numbers from 0 to n;
	using for loop:-
	for(int i=0; i<n;i++)
	in the above case we are taking the input from the user using a for loop.
	*/ 
	
	for(int i=0; i<n;i++){
		cout<<"Enter the value = ";
		cin>>array[i];
	}
	for(int i=0; i<n; i++){
		cout<<array[i]<<" "<<endl;
	}
	
}
