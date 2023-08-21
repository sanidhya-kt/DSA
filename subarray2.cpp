//program to print all the subarray inside the array........
#include<iostream>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)   // starting point
    {
        for (int j = 0; j < n; j++)     //ending point
        {
            for(int k = i; k <= j; k++)     //print all the sub array
            {

                   cout<<arr[k]<<""; 
                   
            }cout<<endl;
            
        }
        
    }
    
}