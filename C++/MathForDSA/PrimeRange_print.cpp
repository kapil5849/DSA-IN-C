


// print the all prime number till n ...

#include<bits/stdc++.h>
using namespace std;
void sieveOfEratosthenes(int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int i=2;i*i<=n;i++){
        if(prime[i]==true){
            for(int j=i*2;j<=n;j+=i){
                prime[j]=false;
            }
        }
        }
        for(int i=2;i<=n;i++){
            if(prime[i]){
                cout<<i<<" ";
            }
        }
    }
int main(){
   int n=30;
   sieveOfEratosthenes(n);
    return 0;
}
