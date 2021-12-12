

#include <iostream>
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
Node* FindMin(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
Node* deleteInBST(Node* root,int key){
    if(root==NULL){
        return root;
    }
    else if(key<root->data){
        deleteInBST(root->left,key);
    }
    else if(key>root->data){
        deleteInBST(root->right,key);
    }
    else{
        if(root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
        }
        else if(root->left==NULL){
            Node* temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==NULL){
            Node* temp=root;
            root=root->left;
            delete temp;
        }
        else{
            Node* temp=FindMin(root->right);
            root->data=temp->data;
            root->right=deleteInBST(root->right,temp->data);
        }
    }
    return root;
}
void inorderPrint(Node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
int main() {
    Node *root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    inorderPrint(root);
    root=deleteInBST(root,2);
    cout<<endl;
    inorderPrint(root);
	return 0;
}
