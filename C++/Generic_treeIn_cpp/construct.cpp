

#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    vector<Node*> children;
};
Node *newNode(int val){
    Node* node=new Node;
    node->data=val;
    return node;
}
Node* constructor(vector<int> arr,int n){
    Node *root=NULL;
    stack<Node*> st;
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            st.pop();
        }
        else{
            Node *t=newNode(arr[i]);
            if(st.size()==0){
                root=t;
            }
            else{
                st.top()->children.push_back(t);
            }
            st.push(t);
        }
    }
    return root;
}
void display(Node* node){
    string str=to_string(node->data)+"->";
    for(Node *child:node->children){
        str+=to_string(child->data)+",";
    }
    str+=".";
    cout<<str<<endl;
    for(Node *child:node->children){
        display(child);
    }
}
int main()
{
    vector<int> arr;
    arr.assign({10,20,50,-1,60,-1,-1,30,70,-1,80,110,-1,120,-1,-1,90,-1,-1,40,100,-1,-1,-1});
    int n=arr.size();
    Node* root=constructor(arr,n);
    display(root);
    return 0;
}
