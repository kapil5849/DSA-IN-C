
// find the number of ways in which n friends can remain single or can be paired up...

#include<iostream>
using namespace std;
int friendPairing(int n){
    if(n==0||n==1||n==2){
        return n;
    }
    return friendPairing(n-1)+friendPairing(n-2)*(n-1);
}
int main(){
    cout<<friendPairing(4)<<endl;
    return 0;
}
