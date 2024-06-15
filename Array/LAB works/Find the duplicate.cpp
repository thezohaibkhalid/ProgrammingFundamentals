//To find the Duplicate,
#include<iostream>

using namespace std;

int main()
{
    int a[20],n;
    cout<<"Enter array size (Max size = 20) = ";
    cin>>n;
        cout<<"Enter array elements ";

        for(int i=0; i<n; i++)
        {
        cout<<"Enter the value of ["<<i<<"] ";
        cin>>a[i];
        }

  cout<<"Duplicate values in the given program are = ";
  for(int i=0; i<n; i++)
   {
    for(int j=i+1;j<n;j++)
    {
    if(a[i]==a[j])
    {
    cout<<" "<<a[i]<<" ";
    }
   }
   }
   
   for(int i=0;i<n;i++)
  return 0;
 }
