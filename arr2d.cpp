#include<iostream>
using namespace std;

int main(){

    int n, m;
    cout << " enter num of rows:-";
    cin  >> n ;
    cout <<" enter num of col:-";
    cin >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    cout <<"the matrix is \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}