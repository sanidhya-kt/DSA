#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){ 

    // program to change lower case letter to upper case

    // string s = "snaidhyakumartiwari";
    // for (int i = 0; i <= s.size(); i++)
    // {
    //     if(s[i]>='a' && s[i]<= 'z'){
    //         s[i] -= 32;
    //     }
    // }
   // cout<<s<<endl;

     //sort the string which have character in it

     string a = "45324376287";
     sort(a.begin(), a.end(), greater<int>());

     cout<<a<<endl;
    
}