

#include<bits/stdc++.h>
using namespace std;
int solve(int n,int k){
  // base case => when remaining only one number... so, we always start with 0...
    if(n==1){
        return 0;
    }
  // our call in order to find in next n-1 of k...
    int x=solve(n-1,k);
  // it's our y...
    int y=(x+k)%n;
    return y;
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<solve(n,k);
    return 0;
}
