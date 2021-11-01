



#include<iostream>
#include<set>
using namespace std;
int main() {
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<s.count(4)<<endl;
    cout<<endl;
    set<int>::iterator itr=s.find(1);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<endl;
    }
    cout<<endl;
}
