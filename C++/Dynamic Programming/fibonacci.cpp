
// print fibonacci of number n...


#include <bits/stdc++.h>
using namespace std;
vector<int> memo;
int fib(int n){
    if(n<=2){
        return 1;
    }
    if(memo[n]!=-1){
        return memo[n];
    }
    return memo[n]=fib(n-1)+fib(n-2);
}
int fibonacci(int n){
    memo[1]=memo[2]=1;
    for(int i=3;i<=n;i++){
        memo[i]=memo[i-1]+memo[i-2];
    }
    return memo[n];
}
int main() {
    int n;
    cin>>n;
    memo.resize(n+1,-1);
    cout<<fib(n)<<endl;
    cout<<fibonacci(n)<<endl;
	return 0;
}
