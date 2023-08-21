// to find the max no and min no from array
// here array size and inputs were given by the user.
#include <bits/stdc++.h>
#include <climits>
using namespace std;

// int main(){

//     int n;
//     cout<<"enter array size:-";
//     cin>>n;
//     int array[n];

//     for (int i = 0; i < n; i++)
//     {
//      cin>>array[i];
//     }
//      int max_no = INT_MIN;
//     int min_no = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//           max_no = max(max_no, array[i]);
//       min_no = min(min_no, array[i]);
//     }
//     cout<<max_no<<" "<<min_no<<endl;
//     return 0;
// }

// largest element in array

// int main()
// {
//     int arr[] = {2, 5, 3, 1, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     sort(arr, arr + n);

//     cout << arr[n-1];
// }

int main()
{
    int arr[] = {2, 5, 3, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << max;
}