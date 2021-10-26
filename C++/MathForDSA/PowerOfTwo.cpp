

// power of two or not?...

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=16;
    bool ans=(n&(n-1))==0;
    cout<<ans<<endl;
    return 0;
}
