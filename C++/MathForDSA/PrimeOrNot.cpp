

// check the given number is prime or not? ...


#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    int c=2;
    while(c*c<=n){
        if(n%c==0){
            return false;
        }
        c++;
    }
    return true;
}
int main(){
   int n=20;
   cout<<isPrime(n)<<endl;
    return 0;
}


// in range...


#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    int c=2;
    while(c*c<=n){
        if(n%c==0){
            return false;
        }
        c++;
    }
    return true;
}
int main(){
   int n=20;
   for(int i=1;i<=n;i++){
   cout<<isPrime(i)<<endl;
   }
    return 0;
}
