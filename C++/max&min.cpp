// find the max and min element in the array...

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min_num=INT_MAX;
    int max_num=INT_MIN;
    for(int i=0;i<n;i++){
        min_num=min(min_num,arr[i]);
        max_num=max(max_num,arr[i]);
    }
    cout<<min_num<<endl;
    cout<<max_num<<endl;
return 0;
}
