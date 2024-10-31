#include <iostream>
using namespace std;

int main() {
    int n, loc;

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

    cout << "Enter the location of the item to delete (0 to " << n - 1 << "): ";
    cin >> loc;

    // Check if the location is valid
    if (loc < 0 || loc >= n) {
        cout << "Invalid location!" << endl;
        return 1;
    }

    // Shift elements to the left to overwrite the item at loc
    for (int i = loc; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reduce the size of the array
    n = n - 1;

    // Display the array after deleting the item at the specified location
    cout << "Array after deleting the item at location " << loc << ":\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
