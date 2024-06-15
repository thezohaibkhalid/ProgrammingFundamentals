#include<iostream>
using namespace std;
int main()
{
	int arr[10],a;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter value of index["<<i<<"]=";
		cin>>arr[i];
	}
	cout<<"Enter value for search=";
	cin>>a;
	for(int i=0;i<10;i++)
	{
		if(a=arr[i])
		{
			cout<<"Data Found";
			break;
		}
		else if(i==9)
		{
			cout<<"Data Not Exist";
		}
	}
	return 0;
}
