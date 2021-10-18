

//  calculate the diameter of binary tree...

// 1st: time complexity:O(n^2)

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

int calcheight(Node* root){
    if(root==NULL){
        return 0;
    }
    return max(calcheight(root->left),calcheight(root->right))+1;
}

int calcdiameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=calcheight(root->left);
    int rheight=calcheight(root->right);
    int currdiameter=lheight+rheight+1;
    int ldiameter=calcdiameter(root->left);
    int rdiameter=calcdiameter(root->right);
    return max(currdiameter,max(ldiameter,rdiameter));
}

int main(){
    
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<calcdiameter(root)<<endl;
    return 0;
}


// time compexity:O(n).



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

int calcdiameter(Node* root,int* height){
    if(root==NULL){
        *height=0;
        return 0;
    }
    int lh=0,rh=0;
    int ldiameter=calcdiameter(root->left,&lh);
    int rdiameter=calcdiameter(root->right,&rh);
    int currdiameter=lh+rh+1;
    *height=max(lh,rh)+1;
    return max(currdiameter,max(ldiameter,rdiameter));
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    int height=0;
    cout<<calcdiameter(root,&height)<<endl;
    return 0;
}





