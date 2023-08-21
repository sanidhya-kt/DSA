// calculate the sum of all the sub-arrays given by the user........

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< " num of element;- ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }
    
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += arr[j];
            
            cout << curr << endl;
        }
       
    }
    
    
}