#include<iostream>
#include<numeric>
using namespace std;

int main(){

    int san[] = {12, 13, 14, 15};
    int sum = 0;
    int size = 4;

    // for (int i = 0; i < 4; i++)
    // {
    //     sum += san[i];
    // }


    sum =  accumulate(san, san+size, sum);
    cout<<"sum of the array:"<<sum;
}


