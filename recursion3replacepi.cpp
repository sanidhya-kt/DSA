//to print 3.14 instead of pi in string using recursion
#include<iostream>
using namespace std;

void replacepi(string s){
    if(s.length() == 0){        //base condition
        return;
    }
    if(s[0]=='p'&&s[1]=='i'){
        cout<<"3.14";
        replacepi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacepi(s.substr(1));
    }
}

int main()
{
    replacepi("pipxxpxpipxxxpxpxpxpi");

}