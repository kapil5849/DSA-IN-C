



#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<string> q;
    q.push("kapil");
    q.push("nikita");
    q.push("vaishnav");
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
   
}
