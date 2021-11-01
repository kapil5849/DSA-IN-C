



#include<iostream>
#include<queue>
using namespace std;
int main() {
    priority_queue<int> maxi;
    priority_queue<int,vector<int>,greater<int>> mini;
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    cout<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    cout<<maxi.empty();
    cout<<endl;
    mini.push(5);
    mini.push(6);
    mini.push(7);
    mini.push(8);
    int m=mini.size();
    for(int i=0;i<m-1;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<mini.empty();
    cout<<endl;
    cout<<mini.top();
}
