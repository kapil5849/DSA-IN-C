

// Deque...


#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> d;
    d.push_back(1);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_front(2);
    d.push_back(7);
    for(int i:d){
        cout<<i<<" ";
    }
    d.pop_front();
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    d.pop_back();
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<d.at(2)<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.empty()<<endl;
    cout<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }

}
