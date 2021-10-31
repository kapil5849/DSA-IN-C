

// Given an array of integers, print a sum triangle from it such that 
// the first level has all array elements. From then, at each level 
// number of elements is one less than the previous level and elements 
// at the level is be the Sum of consecutive two elements in the
// previous level. 

// Input : A = {1, 2, 3, 4, 5}
// Output : [48]
//          [20, 28] 
//          [8, 12, 16] 
//          [3, 5, 7, 9] 
//          [1, 2, 3, 4, 5] 


#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
void printTringle(int arr[],int n){
  if(n<1){
    return;
  }
  int temp[n-1];
  rep(i,0,n-1){
    int x=arr[i]+arr[i+1];
    temp[i]=x;
  }
  printTringle(temp,n-1);
  rep(i,0,n){
    if(i==n-1){
      cout<<arr[i]<<" ";
    }
    else{
      cout<<arr[i]<<", ";
    }
  }
  cout<<endl;
}
int32_t main(){
  int arr[]={1,2,3,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  printTringle(arr,n);
}
