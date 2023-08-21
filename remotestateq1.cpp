#include<bits/stdc++.h>
using namespace std;

void permute(string a, int I, int r)
{
    if(I == r)
    {
        cout << a << endl; 
    }else{
        for (int i = I; i <= r; i++)
        {
            swap(a[I], a[i]);
            permute(a, I+1, r);
            swap(a[I], a[i]);
        }
        
    }
}

int main()
{
    string str = "123";
    int n = str.size();
    permute(str, 0, n-1);
    return 0;
}