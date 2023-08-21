#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, temp, powe;
    cout<<"enter number:- ";
    cin>>n;
    int sum = 0;
    int count = 0;
    temp = n;
    while(n!=0)
    {
        n = n / 10;
        ++count;
    }
    powe = count;
    while(n>0)
    {
        int rev;
        rev = n%10;
        sum = sum + pow(rev, count);
        n = n/10;
        

    }
    if (temp == sum){
        cout<<"it's an armstrong number";
    }else{
        cout<<"not-armstrong number";
    }
    return 0;
}
