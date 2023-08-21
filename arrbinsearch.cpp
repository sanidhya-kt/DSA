#include<iostream>
using namespace std;

int binsearch(int arr[], int n, int key){
    int s = 0;      // low
    int e = n;      // high
    int mid;
    while(s <= e){
        mid = s+(e-s) / 2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }else{
            s = mid+1;
        }
        
    }
    return -1;
}
int main(){

    int n;
    cout<<"enter the no of element present in a array:- ";
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
cout<<binsearch(arr, n, key);
 return 0;
}