#include<iostream>
using namespace std;

int gcd_ab(int a, int b)
{
    while(b!=0){
    
    int remm = a % b;
    a = b;
    b = remm;
    }
    return a;
}

int main(){
    int a, b;
    cout<<":-";
    cin>>a>>b;
    cout<<gcd_ab(a, b);

    return 0;
}