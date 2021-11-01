


#include<iostream>
#include<map>
using namespace std;
int main() {
    map<int,string> m;
    m[1]="kapil";
    m[12]="vaishnav";
    m[3]="nikita";
    m.insert({5,"saahu"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl; // always in sorted way...
    }
    cout<<m.count(-3)<<endl;
    m.erase(12);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).second<<endl;
    }
}
