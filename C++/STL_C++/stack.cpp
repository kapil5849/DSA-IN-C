

// stack...


#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<string> s;
    s.push("kapil");
    s.push("nikita");
    s.push("vaishnav");
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
   
}
