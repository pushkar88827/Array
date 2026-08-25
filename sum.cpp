#include <iostream>
using namespace std;

int main() {
    int sum = 0;
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
            sum += arr[i][j];
        }
    }

    cout << "\nSum of all elements = " << sum;
    return 0;
}

