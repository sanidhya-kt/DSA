#include<bits/stdc++.h>
using namespace std;

bool check(int x, int y, int z){
    int a = max(x, max(y, z));
    int b, c;

    if (a == x){
        b = y;
        c = z;
    }else if (b == x){
        a = y;
        c = z;
    }else
{
    b = z;
    c = x;
}
if (a*a == b*b + c*c){
    return true;
}else{
    return false;
}
}

int32_t main()
{
    int x, y, z;
    cin>>x >>y >>z;
    
    if(check(x, y, z)){
        cout<<"pythagores triplet";
    }else{
        cout<<"it  is not a triplet!....";
    }
  return 0;
}