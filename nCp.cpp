#include<iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i=2; i<=n; i++){
      
      factorial *= i;

    }
return factorial;
} 
int nCr(int n, int r){
  return fact(n) / (fact(r) * fact(n-r));
 
}
int main(){
    int n,r;
    cout<<"enter n and r:-";
    cin>>n>>r;
    cout<<nCr(n, r);
    return 0; 
}