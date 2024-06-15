/*make function named fact() which gets an input from the main function and returns the 
factorial of that function... e.g. if user inputs 4... It should return 24*/
#include <iostream>
using namespace std;

int fact(int n) {
    int result=1;
    for (int i=1; i<=n;i++) {
        result*=i;
    }
    return result;
}

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The factorial of "<<num <<" is: "<<fact(num)<<endl;
    return 0;
}

