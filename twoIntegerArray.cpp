#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the arrays: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be positive!" << endl;
        return 1;
    }

    int arr1[n], arr2[n], result[n];

    cout << "Enter the elements of the first array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the elements of the second array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    // Add corresponding elements of arr1 and arr2, and store in result
    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] + arr2[i];
    }

    // Display the result array
    cout << "Resultant array after adding the two arrays:\n";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
