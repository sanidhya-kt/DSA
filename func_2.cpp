#include<iostream>
using namespace std;
// function declaration
void add(int a, int b){
    return(a+b);
}

void sub(int a, int b){
    return(a-b);
}

void multi(int a, int b){
    return(a*b);
}

void div(int a, int b){
    return(a/b);
}

int main(){
 int num1, num2, add1, sub1, multi1, div1 ;
 cout<<"enter number 1 and 2: -";
 cin>>num1>>"\n">>num2;

 add1 = add(num1, num2);
 cout<<add1;
 sub1 = sub(num1, num2);
 cout<<sub1;
 multi1 = multi(num1, num2);
 cout<<multi1;
 div1 = div(num1, num2);
cout<<div1;


}