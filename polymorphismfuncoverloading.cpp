# include <iostream>
using namespace std;

//function overloading

class sanidhya
{
    public:
        void func()
        {
            cout << "function with no arguments" << endl;
        }
        void func(int x)
        {
            cout << "function with int type argument" << endl;
        }
        void func(double x)
        {
            cout << "function with double type argument" << endl;
        }
};

int32_t main()
{
    sanidhya obj;
    obj.func();
    obj.func(4);
    obj.func(6.2);
   
}