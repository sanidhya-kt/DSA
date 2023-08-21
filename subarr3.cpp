#include<iostream>
#include<climits>
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
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)   // starting point
    {
        for (int j = 0; j < n; j++)     //ending point
        {   int sum =0 ;
            for(int k = i; k <= j; k++)     //print all the sub array
            {
                sum += arr[k];

            }
            max_sum = max(max_sum, sum);
        }
        
    }
    cout << max_sum;
}