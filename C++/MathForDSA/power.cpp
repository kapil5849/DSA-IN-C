


// power a^b...

#include<bits/stdc++.h>
using namespace std;
int main(){
    int base=3;
    int power=6;
    int ans=1;
    while(power>0){
        if((power&1)==1){
            ans*=base;
        }
        base*=base;
        power=power>>1;
    }
    std::cout << ans << std::endl;
    return 0;
}
