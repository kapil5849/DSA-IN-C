// Problem: given an array arr[] of size n for every i form 0 to n-1. Output max(arr[0], arr[1], .... arr[n])...


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    cout<<mx<<endl;
    return 0;
}
