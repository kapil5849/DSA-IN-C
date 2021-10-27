

// insert the element in heap...


#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i){
    int parent=(i-1)/2;
    if(arr[parent]>0){
        if(arr[i]>arr[parent]){
            swap(arr[i],arr[parent]);
            heapify(arr,n,parent);
        }
    }
}
void insertNode(int arr[],int &n,int value){
    n=n+1;
    arr[n-1]=value;
    heapify(arr,n,n-1);
}
void printArray(int arr[],int n){
    for(int i=0;i<n;++i){
    cout<<arr[i]<<" "<<endl;
    }
}
int main(){
    int n=7;
    int arr[n]={50,30,40,10,5,20,30};
    int value=60;
    insertNode(arr,n,value);
    // int value=45;
    // insertNode(arr,n,value);
    printArray(arr,n);
    return 0;
}
