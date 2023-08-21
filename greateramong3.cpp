#include<iostream>
using namespace std;

int main()
{
 int a, b, c;
 cout<<"give the 3 inputs:-";
 cin>>a>>b>>c;
 if(a>b && a>c) {
     cout<<"a is the largest number among all 3 given numbers"<<a;

 }
 else if(a>b&&c>a) {
     cout<<"c is the lagest among all inputs"<<c;

 }
 else {
     cout<<"b is the largest"<<b;
 }

 return 0;
}