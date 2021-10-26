


// find the unique element in array...


#include<iostream>
using namespace std;
int findunique(int arr[],int n){
    int unique=0;
    for(int i=0;i<n;i++){
        unique^=arr[i];
    }
    return unique;
    
}
int main(){
    int n;
    int arr[n]={2,3,3,4,2,6,4};
    
    cout<<findunique(arr,n)<<endl;
    
    return 0;
}
