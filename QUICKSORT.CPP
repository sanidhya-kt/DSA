#include<iostream>
using namespace std;

//swap function
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// partition function

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];     //pivot at last element
    int i = l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}

//quicksort function
void quicksort(int arr[], int l, int r)
{
    
    if(l<r)
    {
        int pi=partition(arr, l, r);
        quicksort(arr, l, pi-1);
        quicksort(arr, pi+1, r);
        
    }
}


// driver code
int main()
{
    int arr[5] = {6, 43, 3, 5 ,1};
    quicksort(arr, 0, 4);             // here we write r-1 instead in the function
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}