

// find the number is odd or even...


#include<iostream>
using namespace std;

bool isOdd(int n){
    return (n&1)==1;
}

int main(){
    
    int n;
    cin>>n;
    cout<<isOdd(n)<<endl;
    return 0;
}
