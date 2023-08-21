#include<iostream>
using namespace std;

int main(){

    int maxx = -10000;
    int n;
    cout<<" enter the number of element present inside an array: - ";
    cin >> n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i<n; i++){
        maxx = max(maxx, arr[i]);
        cout<< maxx << endl;
    }
}
