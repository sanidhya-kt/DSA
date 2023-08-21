//four basic operation on bit manipulation.....

#include<iostream>
using namespace std;

            // get bit

int getbit(int n, int pos)
    {
        return (n & (1<<pos) != 0);
    }
            //set bit

int setbit(int n, int pos)
    {
        return (n | (1<<pos));
    }
            //clear bit

int clearbit(int n, int pos)   
    {
        int mask = ~(1<<pos);
        return (n & mask);
    }         
            //update bit

int updatebit(int n, int pos, int value)        //update = clear + set bit
    {
         int mask = ~(1<<pos);
         n = n & mask;
        return n | (value<<pos);
    }

int main(){
// get bit
cout<<getbit(5, 2)<<endl;
//set bit
cout<<setbit(5,1)<<endl;
//clear bit
cout<<clearbit(5, 2)<<endl;
//update bit
cout<<updatebit(5, 1,1);

return 0;
}