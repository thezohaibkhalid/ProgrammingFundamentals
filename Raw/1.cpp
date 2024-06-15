 #include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4;
    
    cout << "Enter four integers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    
    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        cout << "The highest number is: " << num1 << endl;
    }
    else if (num2 > num3 && num2 > num4)
    {
        cout << "The highest number is: " << num2 << endl;
    }
    else if (num3 > num4)
    {
        cout << "The highest number is: " << num3 << endl;
    }
    else
    {
        cout << "The highest number is: " << num4 << endl;
    }

    return 0;
}

