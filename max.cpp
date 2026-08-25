#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the row: ";
    cin >> m;
    cout << "Enter the column: ";
    cin >> n;

    int arr[m][n];
    int max = arr[0][0];

    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] > arr[0][0]) {
                max=arr[i][j];
            }
        }
    }

    cout << "\nmax element is = " << max;
    return 0;
}