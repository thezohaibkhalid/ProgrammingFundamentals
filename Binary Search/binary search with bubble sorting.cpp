#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int key) {
    int left = 0;
    int right = n-1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1; // key not found
}

int main() {
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
    cout << "Enter the elements of the array index "<<i<<"  ";   
        cin >> arr[i];
    }
    cout << "Enter the key to search for: ";
    cin >> key;
    bubbleSort(arr, n);
    int index = binarySearch(arr, n, key);
    if (index == -1) {
        cout << "Key not found" << endl;
    }
    else {
        cout << "Key found at index " << index << endl;
    }
    return 0;
}

