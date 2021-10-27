

//  find the factor of number...


#include <iostream>

using namespace std;
int factor(int n){
    for(int i=1;i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n=20;
    cout<<factor(n);
   

    return 0;
}
