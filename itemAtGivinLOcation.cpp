#include <iostream>
using namespace std;

int main() {
    int n, item, loc;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n + 1]; // Array size n+1 to accommodate the new item.

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the item to insert: ";
    cin >> item;
    
    cout << "Enter the location to insert the item (0 to " << n << "): ";
    cin >> loc;

    // Check if location is valid
    if (loc < 0 || loc > n) {
        cout << "Invalid location!" << endl;
        return 1;
    }

    // Shift elements to the right from the given location
    for (int i = n; i > loc; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new item at the specified location
    arr[loc] = item;

    // Increase the size of the array
    n = n + 1;

    // Display the array with the new item inserted at the specified location
    cout << "Array after inserting the new item:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
