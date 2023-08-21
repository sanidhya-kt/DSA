#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    // temp array
    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i]=arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k = l;
    while (i<n1 && j<n2)
    {
        if (a[i]<b[j])
        {
            arr[k] = a[i];
            k++;i++;
        }
        else{
            arr[k]=b[j];
            k++;j++;
        }

    }
    // traversing for remaining elements
    while(i<n1)
    {
        arr[k]=a[i];
        k++;i++;
    }

    while(j<n2)
    {
        arr[k] = b[j];
        k++;j++;
    }
    

    
}

void mergesort(int arr[], int l, int r){
    if(l<r)
    {
    int mid = (l+r)/2;      // mid elements
    mergesort(arr, l, mid);
    mergesort(arr, mid+1, r);
    merge(arr, l, mid, r);
    }
}
// driver code
int32_t main()
{   
    int arr[]={4, 2, 5, 3, 1};
    mergesort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}