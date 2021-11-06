
// given a "2*n" board & tiles of size "2*1", count the number of ways to tile the given board using these tiles...

#include<iostream>
using namespace std;
int tillingWays(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tillingWays(n-1)+tillingWays(n-2);
}
int main(){
    cout<<tillingWays(3)<<endl;
    return 0;
}
