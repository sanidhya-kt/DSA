#include<iostream>
#include<string>
using namespace std;

int main()
{
     /* 
       if 2 alphabet are having same freq
       thanthe o/p will be that letter 
       which comelater in alphabets. 
       */
    string s = "bbbbzzzzaaahhhssssg";
    int freq[26];   //array

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }
    int maxf = 0;
    char ans = 'a';

    for (int i = 0; i < 26; i++)
    {
        if(freq[i] >= maxf)
        {
            maxf = freq[i];
            ans = i+'a';
        }
    }
    cout<< maxf <<" "<<ans<<endl;
    return 0;
}