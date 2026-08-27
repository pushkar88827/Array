//Sum of Secondary Diagonal
#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter the row: ";
    cin >> m;

    cout << "Enter the column: ";
    cin >> n;

    int arr[m][n];
    int sum=0;
      

    cout << "Enter the elements of array:" << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }



    cout<<"Sum of Secondary diagonal elements are: " ;

     

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(i+j==n-1){
                 
                 sum=sum+arr[i][j];

            }
            
           

        }
    }
    cout<<sum;

    return 0;
}