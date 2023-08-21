// using inclusion exclusion principle solve between 1 to 1000 find num divisible by 5 and 7....

#include<iostream>
using namespace std;

int divisible(int n, int a, int b)
{
    int divide_five = n / a;
    int divide_seven = n / b;
    int divide_both = n / (a*b);

    return (divide_five + divide_seven - divide_both) ;
}

int main()
{

int n, a ,b;
cin>>n>>a>>b; 
cout<<divisible(n, a, b);
return 0;
}