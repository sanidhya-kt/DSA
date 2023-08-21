#include<iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout<<"enter n1,n2,n3 value:- "<<endl;
    cin>>n1>>n2>>n3;
// define matrix 1
cout<< "enter mat 1 \t";
    int a[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)

            cin>>a[i][j];   
    }
    // define matrix 2
    cout<< "enter mat 2 \t"<<endl;
    int b[n2][n3];
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)

            cin>>b[i][j];   
    }
    // define and initilize ans matrix to 0
    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)

            ans[i][j]=0;  
    }
    //logic
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];
                
            }
           
        }
         
    }
    cout<<"the final matrix is:"<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<  ans[i][j] <<" ";
           
        }
         cout << endl;
    }
    
    

   return 0; 
}