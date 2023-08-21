#include<iostream>
using namespace std;

int main(){

    // program to check palindrome word
    int n; cin>>n;
    char a[n+1];
    cin>>a;

    //logic

    bool check = 1;                 
    for(int i=0;i<n;i++)
    {

        if(a[i] != a[n-1-i])        // check 1st and last word of array are equal or not
        {
            check = 0;
            break;
        }

    }
    if(check){
        cout<<"palindrome word";

    }else{
        cout<<"not a palindrome word";
    }
}