// how to search an element in 2d matrix

# include <iostream>
using namespace std;

int main()
{

    int i, j, n, m;
    cin >> n >> m;

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> a[i][j];
        }
    }

    int x;
    cout<<"enter x:";
    cin>>x;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
         cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    bool flag = false;
    for(int i = 0;i<n; i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == x){
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }
    if(flag){
        cout<<"element found";

    }
    else{
        cout<<"element not found";
    }
}
    