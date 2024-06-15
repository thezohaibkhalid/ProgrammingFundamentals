#include <iostream>

using namespace std;

// Function to perform addition
double add(double a, double b) {
    return a + b;
}

int main() {
    double num1, num2;
    int choice;

    cout << "Menu:" << endl;
    cout << "1. Add two numbers" << endl;
    cout << "2. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Sum = " << add(num1, num2) << endl;
            break;

        case 2:
            cout << "Exiting program" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
