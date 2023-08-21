// reverse a string using recursion
#include<iostream>
using namespace std;
void reverse(string s){

    if(s.length()==0){
        return;
    }
    string rostring = s.substr(1);      // stl function
    reverse(rostring);
    cout<<s[0];
}
int main()
{
reverse("SANID");
}