#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter the row: ";
    cin >> m;

    cout << "Enter the column: ";
    cin >> n;

    int arr[m][n];
    int sum =0    ;

    cout << "Enter the elements of array:" << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(i==j){
                 sum +=arr[i][j];

            }
           

        }
    }

    cout<<"sum of diagonal element is "<<sum;

    return 0;
}