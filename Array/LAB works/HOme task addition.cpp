#include <iostream>
using namespace std;

int main() {
  int n, a[100];
  cout<<"Enter the number of arrays :"; 
  cin>>n;
  cout<<"Enter the elements:"<<endl;
  for(int i=0;i<n;i++) {
    cin>>a[i];
  }
  int sum = 0;
  for(int i=0; i<n;i++) {
    sum += a[i];
  }
  cout<<"The sum of the elements is: "<<sum<<endl;
  return 0;
}

