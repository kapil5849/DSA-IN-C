

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



// time complexity O(sqrt(n))...


#include <iostream>
#include<math.h>
using namespace std;
int factor(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                cout<<i<<endl;
            }
            else{
            cout<<i<<" "<<n/i<<endl;;
            }
        }
    }
}
int main()
{
    int n=20;
    cout<<factor(n);
   

    return 0;
}
