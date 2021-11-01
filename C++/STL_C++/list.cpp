


#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(5);
    l.push_front(4);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<l.size()<<endl;
    list<int> n(5,100);
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

}
