

// IN Binary Tree Max Sum Path from One Node to Another 



#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};
int maxPathSumHelper(Node* root,int &ans){
    if(root==NULL){
        return 0;
    }
    int left=maxPathSumHelper(root->left,ans);
    int right=maxPathSumHelper(root->right,ans);
    int nodeMax=max(max(root->data,root->data+left+right),max(root->data+left,root->data+right));
    ans=max(ans,nodeMax);
    int singlePathSum=max(root->data,max(root->data+left,root->data+right));
    return singlePathSum;
}
int maxPathSum(Node* root){
    int ans=INT_MIN;
    maxPathSumHelper(root,ans);
    return ans;
}
int main() {
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<maxPathSum(root);
	return 0;
}

