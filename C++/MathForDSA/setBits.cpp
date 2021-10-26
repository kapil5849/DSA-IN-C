


//  find the number of set bits...

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    cout<<bitset<8>(n).to_string()<<endl; 
    int count=0;
    while(n>0){
        count++;
        n-=(n&-n);
        
    }
    cout<<count<<endl;
    return 0;
}
