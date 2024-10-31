#include <iostream>
using namespace std;

int main() {
    int n;

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

    // Shift elements to the left to remove the top element
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reduce the size of the array
    n = n - 1;

    // Display the array after deleting the item from the top
    cout << "Array after deleting the top element:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
