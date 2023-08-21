// count  all possible path from starting point to neding point in gameboard...
#include<iostream>
using namespace std;

int countPath(int sp, int ep){
    // base case
    if(sp == ep)
    {
        return 1;
    }
    if(sp > ep){
        return 0;
    }
    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        
        count+=countPath(sp+i, ep);
        
    }
    
   return count; 
}

int main(){
    cout<<countPath(0, 5);
}