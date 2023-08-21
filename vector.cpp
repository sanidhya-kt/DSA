#include <iostream>
#include <vector>

using namespace std;
// 1 st type to print vector
int main()
{
    vector<int> v; // initilize a vector
    v.push_back(1);
    v.push_back(2); // inserting a value to vector
    v.push_back(3);
    v.push_back(4);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    vector<int>::iterator it;                   // iterator method
    for(it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<endl;
    }

    for (auto element : v)                  // using auto keyword
    {
        cout << element << endl;
    }
}
//.................................................................................................
