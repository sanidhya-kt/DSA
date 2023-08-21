// to return first and last occurance of array using recusion
#include<iostream>
using namespace std;
                                                   // i is a pointer
int firstocc(int arr[], int n, int i, int key){

    //base condition
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr , n, i+1, key);
}
// for  last occurance

int lastocc(int arr[],int n, int i, int key){
   //base condition
    if(i==n){
        return -1;
    }  
    int restarray = lastocc(arr, n, i+1, key);
    if(restarray!=-1){
        return restarray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main()
{
    int n;
    int arr[] = {4,2,1,2,5,2,7};
    cout<<firstocc(arr , 7, 0, 2)<<endl;
    cout<<lastocc(arr , 7, 0, 2);
}