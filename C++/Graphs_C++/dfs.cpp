

// depth first search...

#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N=1e5+2,MOD=1e9+7;
bool vis[N];
vector<int> adj[N];
void dfs(int node){
    vis[node]=1;
    cout<<node<<" ";
    vector<int> :: iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++){
        if(vis[*it]);
        else{
            dfs(*it);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<=n;i++){
        vis[i]=0;
    }
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    
    
    return 0;
}
