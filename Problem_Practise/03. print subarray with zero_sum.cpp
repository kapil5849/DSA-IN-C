

// print all subarray with 0 sum...


#include <bits/stdc++.h>
using namespace std;

void printAllSubarrays(int nums[],int n){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum==0){
                cout<<i<<"..."<<j<<endl;
            }
        }
    }
}

int main(){
    int nums[] = {4, 2, -3, -1, 0, 4};
    int n = sizeof(nums)/sizeof(nums[0]);
    printAllSubarrays(nums, n);
    return 0;
}
