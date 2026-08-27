
#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter the row: ";
    cin >> m;

    cout << "Enter the column: ";
    cin >> n;

    int arr[m][n];
    int sum1=0;
    int sum2=0;
      

    cout << "Enter the elements of array:" << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(i+j==n-1){
                 
                 sum1=sum1+arr[i][j];
            }
            else if(i==j){
                sum2=sum2+arr[i][j];
            }
            
        }
    }
    cout<<sum2<< " sum 2"<<endl;
    cout<<sum1<< " sum 1"<<endl;

    cout<<"Diffrence of sum = "<<sum1-sum2;

    return 0;
}