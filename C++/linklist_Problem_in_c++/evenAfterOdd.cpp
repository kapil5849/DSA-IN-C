

// put even position nodes after odd position nodes...


// linked list basic concept...
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

node* evenafterodd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenstart=even;
    while(even->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if(odd->next!=NULL){
        even->next=NULL;
    }
}


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
    evenafterodd(head);
    display(head);

    return 0;
}
