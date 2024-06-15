/*: make function that takes a number from main, and returns "positive" if number is greater 
than 0 otherwise it returns "negative"... Then In main function a message should be displayed.*/
#include <iostream>
#include <string>
using namespace std;

    string positive(int num) {
    if (num > 0) {
        return "positive";
    } else {
        return "negative";
    }
}

int main() {
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    string result = positive(number);
    cout<<"The number is "<<result<<"."<<endl;

    return 0;
}
