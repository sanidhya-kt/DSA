#include<bits/stdc++.h>
using namespace std;
int main(){

    int rows, columns;
    cout<<"enter the number of rows and columns:-";
    cin>>rows>>columns;

    for (int i = 1; i <= rows; i++)
    {
       for ( int j = 1; j <= columns; j++)
       {
           if (i ==1 || i == rows || j == 1 || j == columns)
           {
                cout<<"*";
           }
           else
           cout<<" ";
       }
       
       cout<<endl;
    }
    return 0;
}