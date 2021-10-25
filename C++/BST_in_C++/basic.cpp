

// how to create bst and what's the rule to create bst...

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* intsertBST(Node *root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left=intsertBST(root->left,val);
    }
    else{
        root->right=intsertBST(root->right,val);
    }
    return root;
}

void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node *root=NULL;
    root=intsertBST(root,5);
    intsertBST(root,1);
    intsertBST(root,3);
    intsertBST(root,4);
    intsertBST(root,2);
    intsertBST(root,7);
    inorder(root);
    return 0;
}
