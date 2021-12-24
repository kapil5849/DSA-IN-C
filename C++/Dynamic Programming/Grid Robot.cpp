
// given a grid with r row's and c col's and the way to reach end point form starting.
// condition:- robot can move right or down only.

#include <bits/stdc++.h>
using namespace std;
int path(int r,int c){
    int memo[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0 or j==0){
                memo[i][j]=1;
            }
            else{
                memo[i][j]=memo[i-1][j]+memo[i][j-1];
            }
        }
    }
    return memo[r-1][c-1];
}
int main() {
    int r,c;
    cin>>r>>c;
    cout<<path(r,c)<<endl;
	return 0;
}

