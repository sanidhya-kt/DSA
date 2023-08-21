//generate all substring from a string using rescursion
#include<iostream>
using namespace std;
    void subseq(string s, string ans){

        if(s.length()==0){
            cout<<ans<<endl;
            return;
        }

        char ch = s[0];
        string ros = s.substr(1);
        subseq(ros, ans);
        subseq(ros, ans+ch);
    }
    
    void subseq1(string s, string ans){

        if(s.length()==0){
            cout<<ans<<endl;
            return;
        }

        char ch = s[0];
        int code = ch;
        string ros = s.substr(1);
        subseq1(ros, ans);
        subseq1(ros, ans+ch);
        subseq1(ros, ans+to_string(code));
    }
int main(){
    subseq("ABC", "");
    cout<<endl;
    subseq1("AB", "");
}
