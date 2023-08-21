#include<iostream>
using namespace std;

int main()
{
    //define 2d matrix
    int n, m;
    cin>>n>>m;
     int key;
    cout<< "enter key";
    cin>>key;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
   
    bool found = false;
    int r=0,c=m-1;
    while (r<n and c>=0)
    {
        if(a[r][c] == key){
            found = true;
        }
        if(a[r][c] > key){
            c--;
        }else{
            r++;
        }
    }
    if(found){
        cout<<"element found";
    }else{
        cout<<"element does not exits.";
    }
    return 0;
}