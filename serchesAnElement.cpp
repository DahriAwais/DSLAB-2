#include <iostream>
using namespace std;

int main() {
    int n, choice, index, value;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array is empty or invalid size!" << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Choose search option:\n";
    cout << "1. Search by index\n";
    cout << "2. Search by value\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        // Search by index
        cout << "Enter the index to search (0 to " << n - 1 << "): ";
        cin >> index;

        if (index >= 0 && index < n) {
            cout << "Element at index " << index << " is: " << arr[index] << endl;
        } else {
            cout << "Invalid index!" << endl;
        }
    } else if (choice == 2) {
        // Search by value
        cout << "Enter the value to search: ";
        cin >> value;

        bool found = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == value) {
                cout << "Value " << value << " found at index " << i << endl;
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << "Value " << value << " not found in the array." << endl;
        }
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
