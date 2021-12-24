
// frog Problem.... coding minutes....

// bottom up : start from basic and than iterate through problem (data)...

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int h[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    int dp[n];
    dp[0]=0;
    dp[1]=dp[0]+abs(h[1]-h[0]);
    for(int i=2;i<n;i++){
        dp[i]=min(dp[i-1]+abs(h[i-1]-h[i]),dp[i-2]+abs(h[i-2]-h[i]));
    }
    cout<<dp[n-1];
    return 0;
}

// top down : memo + recursion...


#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
const int N=1e5;
int h[N],memo[N];
int frog(int n){
    if(n==0){
        return 0;
    }
    int &ans=memo[n];
    if(ans!=-1){
        return ans;
    }
    ans=frog(n-1)+abs(h[n-1]-h[n]);
    if(n-2>=0){
        ans=min(ans,frog(n-2)+abs(h[n-2]-h[n]));
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    memset(memo,-1,sizeof(memo));
    cout<<frog(n-1);
    return 0;
}

