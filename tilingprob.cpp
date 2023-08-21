#include<iostream>
using namespace std;

int tilingprob(int n){
    // base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingprob(n-1)+tilingprob(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<tilingprob(n);

}