
// Given an unsorted integer array, find a pair with the given sum, & ccount the total number of pair.


#include <bits/stdc++.h>
using namespace std;

// Brute force method...

void findPair1(int arr[],int n,int target){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
    }
}

// by sorting...

void findPair2(int arr[],int n,int target){
    sort(arr,arr+n);
    int l=0,h=n-1;
    while(l<h){
            if(arr[l]+arr[h]==target){
                cout<<"("<<arr[l]<<","<<arr[h]<<")"<<endl;
            }
        (arr[l]+arr[h]<target)? l++:h--;
    }
}

// by hashing...

void findPair(int arr[],int n,int target){
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        if(map.find(target-arr[i])!=map.end()){
            cout<<"("<<arr[map[target-arr[i]]]<<","<<arr[i]<<")"<<endl;
        }
        map[arr[i]]=i;
    }
}

// count total number of pair...

int findPair3(int arr[],int n,int target){
    unordered_map<int,int> map;
    int cnt=0;
    for(int i=0;i<n;i++){
        int b=target-arr[i];
        if(map[b]){
            cnt+=map[b];
        }
        map[arr[i]]++;
    }
    return cnt;
}

int main() {
int arr[]={4,7,8,5,6,3,1,2};
int target=16;
int n=sizeof(arr)/sizeof(int);
findPair(arr,n,target);
cout<<endl;
findPair1(arr,n,target);
cout<<endl;
findPair2(arr,n,target);
cout<<endl;
cout<<findPair3(arr,n,target)<<endl;
	return 0;
}
