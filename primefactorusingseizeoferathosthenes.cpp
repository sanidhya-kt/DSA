#include<iostream>
using namespace std;

void primefactor(int n)
{
  //array define
  int spf[100] = {0} ;         //initilize with 0  
  for (int i = 2; i <= n; i++)
  {
      spf[i] = i;              //mark them their own prime factor
    }
  for (int i=2; i<=n; i++){
      if(spf[i]==i){
          for (int j = i*i; j <= n; j++){
             if( spf[j] == j)         //recheck
                {
                   spf[j] = i;       //all other factor 
                }
            }
        }
    } 
  while(n!=1)
{
    cout<<spf[n]<<" ";
    n = n / spf[n];
}  

 
}



int main()
{
    int n;
    cin>>n;

    primefactor(n);

    return 0;
}