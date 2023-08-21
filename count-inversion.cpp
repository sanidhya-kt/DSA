// brute force approch

# include <iostream>
using namespace std;

int inversion(int arr[], int n){
    int inv = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
            inv++;
        }
    }
    cout << inv;
}
int main()
{
    int arr[] = {3, 5, 6, 9, 1, 2, 7, 8};
    inversion(arr, 8);
}