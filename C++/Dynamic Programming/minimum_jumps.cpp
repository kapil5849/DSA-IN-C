

// Given an array of integers where each element represents the max number of steps that can be made forward from that element.
// find the minimum jumps needed to reach the final index...

#include <bits/stdc++.h>
using namespace std;
int min_jump(int arr[],int n,int dp[],int i){
    if(i==n-1){
        return 0;
    }
    if(i>=n){
        return INT_MAX;
    }
    if(dp[i]!=0){
        return dp[i];
    }
    int steps=INT_MAX;
    int max_jumps=arr[i];
    for(int jump=1;jump<=max_jumps;jump++){
        int next_cell=i+jump;
        int sub_prob=min_jump(arr,n,dp,next_cell);
        if(sub_prob!=INT_MAX){
            steps=min(steps,sub_prob+1);
        }
    }
    return dp[i]=steps;
}
int main() {
    int arr[]={3,4,2,1,2,3,7,1,1,3};
    int n=sizeof(arr)/sizeof(int);
    int dp[n]={0};
    cout<<min_jump(arr,n,dp,0)<<endl;
	return 0;
}
