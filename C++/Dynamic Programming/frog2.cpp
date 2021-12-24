

// frog 2 problem from coding minute...

// bottom up...

#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int h[N];
int main() {
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    int dp[n];
    dp[0]=0;
    dp[1]=dp[0]+abs(h[1]-h[0]);
    for(int i=2;i<n;i++){
        dp[i]=INT_MAX;
        for(int kk=1;kk<=k;kk++){
            dp[i]=min(dp[i],dp[i-kk]+abs(h[i]-h[i-kk]));
        }
    }
    cout<<dp[n-1];
    return 0;
}


// top up...

