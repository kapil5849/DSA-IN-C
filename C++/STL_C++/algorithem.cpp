

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(13);
    v.push_back(25);
    v.push_back(7);
    cout<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    int a=3;
    int b=5;
    cout<<max(a,b);
    cout<<endl;
    cout<<min(a,b);
    cout<<endl;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
