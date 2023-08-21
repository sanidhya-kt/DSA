
#include<iostream>
using namespace std;
int adding(int a, int b){
    return(a+b);
}

int main(){
    int num1, num2, add;
    cout<<"enter num 1:-";
    cin>> num1;
    cout<<"enter num 2:-";
    cin>> num2;
    add = adding(num1, num2);
    cout<<"addition is:-"<<add<<endl;
    return 0;
}
