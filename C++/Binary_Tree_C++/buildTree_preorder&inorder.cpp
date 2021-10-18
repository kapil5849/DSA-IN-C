

// build tree form preorder and inorder...

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int search(int inorder[],int start,int end,int val){
    for(int i=start;i<=end;i++){
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;
}

Node* buildtree(int preorder[],int inorder[],int start,int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int val=preorder[idx];
    idx++;
    Node* curr=new Node(val);
    if(start==end){
        return curr;
    }
    int pos=search(inorder,start,end,val);
        curr->left=buildtree(preorder,inorder,start,pos-1);
        curr->right=buildtree(preorder,inorder,pos+1,end);
        return curr;
}

void inorderprint(Node* root){
    if(root==NULL){
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}

int main(){
    int preorder[]={1,2,3,4,5};
    int inorder[]={4,2,1,5,3};
    Node* root=buildtree(preorder,inorder,0,4);
    inorderprint(root);
    cout<<endl;
    return 0;
}


