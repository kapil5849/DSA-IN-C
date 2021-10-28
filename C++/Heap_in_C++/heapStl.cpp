

// heap stl...

#include<bits/stdc++.h>
using namespace std;
#include<set>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<algorithm>
#include<stack>
#include<string>

#define vi vectro<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep (i,a,b) for(int i=0;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

signed main(){
    priority_queue <int,vector<int>> pq;
    pq.push(2);
    pq.push(3);
    pq.push(1);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<endl;
    
    priority_queue <int,vector<int>,greater<int>> pqm;
    pqm.push(2);
    pqm.push(1);
    pqm.push(3);
    cout<<pqm.top()<<endl;
    pqm.pop();
    cout<<pqm.top()<<endl;
    return 0;
    
}


// make_heap(), push_heap(), pop_heap(), sort_heap() fuction...


#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // initializing vector...
    vector<int> v1 = {40, 30, 25, 35, 15};
    
    // converting vector into a heap using make_heap() function...
    make_heap(v1.begin(),v1.end());
    
    // displaying the maximum element of heap using front() function...
    cout<<v1.front()<<endl; //40...
    
    // enter element in vector using push_back() function...
    v1.push_back(50);
    
    // using push_heap() to reorder elements in heap...
    push_heap(v1.begin(),v1.end());
    
    // displaying the maximum element of heap using front() function...
    cout<<v1.front()<<endl; 
    
    // using pop_heap() to delete maximum element...
    pop_heap(v1.begin(),v1.end());
    v1.pop_back();
    
    // displaying the maximum element of heap using front() function...
    cout<<v1.front()<<endl;
    
    cout<<endl;
    // displaying heap elements...
    for(int &x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    // sorting heap using sort_heap()...
    sort_heap(v1.begin(),v1.end());
    for(int &x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    
    
    
    return 0;
}

// is_heap, is_heap_until() function...

#include<bits/stdc++.h> 
using namespace std;
int main()
{
      
    // Initializing a vector...
    vector<int> v1 = {40, 30, 25, 35, 15};
      
    // Declaring heap iterator...
    vector<int>::iterator it1;
      
    // Checking if container is heap using is_heap()
    is_heap(v1.begin(), v1.end())?
    cout << "The container is heap ":
    cout << "The container is not heap";
    cout << endl;
      
    // using is_heap_until() to check position till which container is heap
    auto it = is_heap_until(v1.begin(), v1.end());
    
    // Displaying heap range elements
    cout << "The heap elements in container are : ";
    for (it1=v1.begin(); it1!=it; it1++)
       cout << *it1 << " ";
     
    return 0;
}



