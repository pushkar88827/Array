#include <iostream>
using namespace std;

int main() {
    int m, n, key;
    cout << "Enter the row: ";
    cin >> m;
    cout << "Enter the column: ";
    cin >> n;

    int arr[m][n];

    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Enter the element to search: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == key) {
                cout << "\nElement found at position: Row " << i << ", Column " << j;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "\nElement not found in the matrix.";
    }

    return 0;
}
