

// find the magic number...
                  // question by amazon...


#include<iostream>
using namespace std;

int main(){
    int ans=0;
    int n=5;
    int base=5;
    while(n>0){
        int last=n&1; 
        n=n>>1;
        ans+=last*base;
        base=base*5;
        
    }
    cout<<ans<<endl;
    
    return 0;
}
