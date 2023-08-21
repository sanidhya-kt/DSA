#include<iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i=1; i<=n; i++){
      
      factorial *= i;

    }
return factorial;
} 
int main(){
    int n;
    cout<<"give the number of digit for which you are doing factorial:-";
    cin>>n;

 int ans = fact(n);
 cout<<ans<<endl;
return 0;
}