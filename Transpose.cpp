#include <iostream>
using namespace std;

int main() {
    int m,n;
    cout<<"Enter the number of row ";
    cin>>m;
    cout<<"Enter the number of coloumn ";
    cin>>n;

    int arr[m][n];

    cout<<"Enter the elements of matrix ";

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout << "Transpose:" << endl;
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

}

}