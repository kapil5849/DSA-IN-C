
// merge two linked list by recursive method

#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
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
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
   }
node* mergerecursive(node* &head1,node* &head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node* result;
    if(head1->data<head2->data){
        result=head1;
        result->next=mergerecursive(head1->next,head2);
    }
    else{
        result=head2;
        result->next=mergerecursive(head1,head2->next);
    }
    return result;
}
int main(){
    node* head1=NULL;
    node* head2=NULL;
    int arr1[]={2,3,4,6,8,9};
    int arr2[]={1,5,7,11,15,45};
    for(int i=0;i<6;i++){
        insertattail(head1,arr1[i]);
    }
    for(int i=0;i<6;i++){
        insertattail(head2,arr2[i]);
    }
    display(head1);
    display(head2);
    node* newhead=mergerecursive(head1,head2);
    display(newhead);
    
    return 0;
}
