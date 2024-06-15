#include<iostream>
using namespace std;
int main ()
{
	
    int arr[10], n, i, max, min, maxLocation=0, minLocation=0;
    cout<<"Enter the size of the array = ";
    cin>>n;
    cout<<"Enter the elements of the array = ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    max = arr[0];
    for (i=1;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
            maxLocation=i;
    }
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if (min>arr[i])
            min=arr[i];
            minLocation=i;
    }
    cout<<"Largest element = "<<max<<endl;
    cout<<"Location of largest element ="<<maxLocation<<endl;
    cout<<"Smallest element = "<<min<<endl;
    cout<<"Location of Smallest element ="<<minLocation<<endl;

    return 0;
}
