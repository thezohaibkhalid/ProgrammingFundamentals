#include <iostream>
using namespace std;
int main() {
    char input;

    cout << "Enter a letter: ";
    cin >> input;

    switch (input) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << input << " is a vowel." << endl;
            break;
        default:
            cout << input << " is a consonant." << endl;
    }

    return 0;
}

