//program to o/p max length of the word from sentence

#include<iostream>
using namespace std;

int main()
{
    int n;  cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a, n);  // taking input the  whole sentence into the char array
    cin.ignore();       // clearing the buffer

    int i = 0;  int maxlen = 0;  int charlen = 0;
    int st = 0;  int maxst = 0;
    // logic
    while(1)
    {
        if(a[i] == ' ' || a[i] == '\0')
            {
                if(charlen>maxlen)
                {
                    maxlen = charlen;
                    maxst = st;
                }
            charlen = 0;
            st = i+1;
            }
        else
            charlen++;

            if(a[i] == '\0')
            {
                break;
            }

    i++;
    }
    cout<<maxlen<<endl;
    for (int i = 0; i < maxst; i++)
    
        cout<<a[i+maxst];
    
    return 0;
}