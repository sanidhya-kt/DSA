//2 unique number in array where all num.. except 2 are present twice......

#include<iostream>
using namespace std;

int setBit(int n, int pos)
{
    return ((n & (1<<pos))!= 0);
}

int xorsum = 0;
void unique(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        xorsum ^= arr[i];
    }
    int setbit = 0;
    int tempxor = xorsum;
    int pos = 0;
    while(setbit!=1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int  i = 0; i < n; i++)
    {
        if(setBit(arr[i], pos-1)){
            newxor = newxor ^ arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(newxor^tempxor);
    
}

int main()
{
    int arr[] = {1,2,3,1,2,3,5,7};
    unique(arr, 8);
    return 0;
}