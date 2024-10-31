#include <iostream>
using namespace std;

int main() {
    int n, item;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n + 1]; // We use size n+1 to accommodate the new item at the top.

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the item to insert at the top: ";
    cin >> item;

    // Shift elements to the right
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new item at the top (index 0)
    arr[0] = item;

    // Increase the size of the array
    n = n + 1;

    // Display the array with the new item at the top
    cout << "Array after inserting the new item at the top:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
