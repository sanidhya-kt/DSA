# include <iostream>
using namespace std;

int FindPeakElement(int arr[], int n, int low, int high){
 
    int mid  = low + (high - low)/2;

    if( (mid == 0 || arr[mid-1] <= arr[mid])  && (arr[n-1] || arr[mid+1] <= arr[mid])){
        return mid;
    }

    if(arr[mid-1] > arr[mid])
    {
        return FindPeakElement(arr, n,0, mid-1 );
    }else{
        return FindPeakElement(arr,n,n+1,n);
    }



}

int main()
{
    int arr[] = {1, 3,6, 10, 5, 7};
    int  n = sizeof(arr) / sizeof(arr[0]);

    cout << "Peak element is : "<<FindPeakElement(arr , n, 0, n);
    return -1;
}