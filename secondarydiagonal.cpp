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



    cout<<"Secondary diagonal elements are: " ;

     

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(i+j==n-1){
                 
                 cout<< " "<<arr[i][j]<<" ";

            }
            
           

        }
    }

    return 0;
}