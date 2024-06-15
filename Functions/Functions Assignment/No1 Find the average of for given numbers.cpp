/*Input a marks of four subjects from user, pass it to a function named as 
"calculateAverage".Then display its average on screen.*/

#include <iostream>
using namespace std;

void calculateAverage(float marks[4]) {
    float sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += marks[i];
    }
    cout << "The average is: " << sum / 4 << endl;
}

int main() {
    float marks[4];
    cout << "Enter marks for 4 subjects:" << endl;
    for (int i = 0; i < 4; i++) {
        cin >> marks[i];
    }
    calculateAverage(marks);
    return 0;
}
