#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int st=0;
    int end=n;
    while(st<=end){
        int mid=(st+end)/2;
            if(key==arr[mid]){
                return mid;
            }
            else if(arr[mid]>key){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key)<<endl;

return 0;
}
