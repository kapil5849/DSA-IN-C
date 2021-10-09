// linklist basic concept...
#include<bits/stdc++.h>
using namespace std;
// Coustructor...
class node{
  public:
  int data;
  node* next;
  node(int val){
      data=val;
      next=NULL;
  }
};
// Add element at head...
void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
// Add element at tail...
void insertattail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
// Display function...
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<"NULL"<<endl;
}
// Searching our element...
bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
// delete at Head...
void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
// Deletion in our linklist...
void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteathead(head);  // now we create it. okay....
        return;
    }
    node* temp=head;
    while(temp->next->data==val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
// Main function...
int main(){
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    display(head);

    insertathead(head,6);
    display(head);
    cout<<search(head,6)<<endl;
    cout<<search(head,7)<<endl;

    deletion(head,5);
    display(head);
    deleteathead(head);
    display(head);

    return 0;
}
