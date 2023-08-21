#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;        // global

void permute(vector<int>&a, int idx){
    // base case
    if(idx == a.size()){
        ans.push_back(a);
        return;
    }
    for(int i = idx; i<a.size(); i++){
        swap(a[i], a[idx]);
        permute(a, idx+1);
        swap(a[i], a[idx]);
    }
    return;
}

/*...................... THROUGH VECTOR.........
int32_t main(){
    int n; cin>>n;
    vector<int>a(n);
    for(auto &i:a)
    cin>>i;
    permute(a, 0);
    for(auto v :ans)
    {
        for(auto i:v)
        cout<<i<<" ";
        cout<<endl;
    }
} 
..............*/


/*............THROUGH STL...................
int32_t main(){
    int n;  cin>>n;
    vector<int>a(n);
    for(auto &i:a)
    cin>>i;

    // STL
    sort(a.begin(), a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(), a.end()));
    
    for(auto v:ans){
        for(auto i:v)
        cout<<i<<" ";
        cout<<endl;
    }  
}

.....................*/