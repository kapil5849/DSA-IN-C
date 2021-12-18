
// given an interger array, and check if subarray with zero (0) sum exist or not...



#include <bits/stdc++.h>
using namespace std;
bool check(int arr[],int n){
    unordered_set<int> set;
    set.insert(0);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(set.find(sum)!=set.end()){
            return true;
        }
        else{
            set.insert(sum);
        }
    }
    return false;
}
int main() {
    int arr[]={4, 2, -3, -1, 0, 4};
    int n=sizeof(arr)/sizeof(int);
    check(arr,n)? cout<<"exist!"<<endl:cout<<"not exist!"<<endl;
	return 0;
}


time complexity: O(n) 
