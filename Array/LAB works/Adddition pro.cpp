#include <iostream>
using namespace std;

int main() {
  int n,a[100],b[100];
  cout<<"Enter the number of elements in the arrays: \";
  cin >>n;
  cout << "Enter the elements of array A:" << endl;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << "Enter the elements of array B:" << endl;
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  int c[100];
  for (int i = 0; i < n; i++) {
    c[i] = a[i] + b[i];
  }
  cout << "The sum of the arrays is: " << endl;
  for (int i = 0; i < n; i++) {
    cout << c[i] << " ";
  }
  cout << endl;
  return 0;
}

