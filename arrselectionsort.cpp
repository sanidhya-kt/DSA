#include<iostream>
using namespace std;

int32_t main(){

    int n;
    cout<<"pls... give the ele... of the  array:-";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
} 