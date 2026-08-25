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

    cin >> arr[0][0];
    int min = arr[0][0];

    for (int i = 0; i < m; i++) {
        for (int j = (i == 0 ? 1 : 0); j < n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    cout << "\nMinimum element = " << min;
    return 0;
}
