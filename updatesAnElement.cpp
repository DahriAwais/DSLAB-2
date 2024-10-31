#include <iostream>
using namespace std;

int main() {
    int n, index, newValue;

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

    cout << "Enter the index of the element to update (0 to " << n - 1 << "): ";
    cin >> index;

    // Check if the index is valid
    if (index >= 0 && index < n) {
        cout << "Enter the new value: ";
        cin >> newValue;

        // Update the element at the specified index
        arr[index] = newValue;

        // Display the array after updating the element
        cout << "Array after updating the element:\n";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid index!" << endl;
    }

    return 0;
}
