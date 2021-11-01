

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5,1);
    vector<int> last(a);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(5);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<v.size()<<endl;
    //v.clear();
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    return 0;
}
