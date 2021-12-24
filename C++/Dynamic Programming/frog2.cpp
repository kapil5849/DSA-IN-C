

// frog 2 problem from coding minute...

// input...
// 4 ->n
// 2 ->k
// 10 30 40 20 ->h[]

// output: 30 -> maximum in dp[]=ans...
// 0 20 30 30 -> dp[]

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

// this code for dp element... 

#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int h[N],dp[N];
int n,k;
void go(int i){
    cout<<i+1<<" ";
    for(int kk=1;kk<=k and (i-kk)>=0;kk++){
            if(dp[i]==dp[i-kk]+abs(h[i]-h[i-kk])){
                go(i-kk);
                return;
            }
        }
}
int main() {
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    dp[0]=0;
    dp[1]=dp[0]+abs(h[1]-h[0]);
    for(int i=2;i<n;i++){
        dp[i]=INT_MAX;
        for(int kk=1;kk<=k and (i-kk)>=0;kk++){
            dp[i]=min(dp[i],dp[i-kk]+abs(h[i]-h[i-kk]));
        }
    }
    cout<<dp[n-1]<<endl;
    for(int i=0;i<n;i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    go(n-1);
    return 0;
}


// top up...

#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
const int N=1e5;
int h[N],memo[N];
int n,k;
int frog(int n){
    if(n==0){
        return 0;
    }
    int &ans=memo[n];
    if(ans!=-1){
        return ans;
    }
    ans=frog(n-1)+abs(h[n-1]-h[n]);
    for(int kk=0;kk<=k and n-kk>=0;kk++){
        if(n-2>=0){
        ans=min(ans,frog(n-kk)+abs(h[n-kk]-h[n]));
    }
    }
    return ans;
}
int main() {
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    memset(memo,-1,sizeof(memo));
    cout<<frog(n-1);
    return 0;
}




