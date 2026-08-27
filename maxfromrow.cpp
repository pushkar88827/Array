#include <iostream>
using namespace std;

int main() {
    int m, n;

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

    for (int i = 0; i < m; i++) {
        int max = arr[i][0];

        for (int j = 1; j < n; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }

        cout << "Row " << i + 1 << " max = " << max << endl;
    }
}