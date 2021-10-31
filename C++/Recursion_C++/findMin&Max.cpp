

// Recursive Programs to find Minimum and Maximum elements of array...


#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int findMin(int arr[],int n){
  if(n==1){
    return arr[0];
  }
  return min(arr[n-1],findMin(arr,n-1));
}
int findMax(int arr[],int n){
  if(n==1){
    return arr[0];
  }
  return max(arr[n-1],findMax(arr,n-1));
}
int32_t main(){
  int arr[]={1,2,3,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<findMin(arr,n)<<endl;
  cout<<findMax(arr,n)<<endl;
  return 0;
}
