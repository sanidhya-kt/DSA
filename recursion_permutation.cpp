//program to print all permutation in a string..
#include<iostream>
using namespace std;

void permute(string s, string ans)
{
    // base case
    if (s.length()==0)
    {
        cout<<ans<<endl;
    
    }
    
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i)+s.substr(i+1);
        permute(ros, ans+ch);
    }
    
}

int main()
{
    permute("ABC", "");
    
}



