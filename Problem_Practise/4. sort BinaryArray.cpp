
// given an binary array and you have to sort this in linear time only...


#include <bits/stdc++.h>
using namespace std;

// method 1:-

// int sort(int arr[],int n){
//     int cnt=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             cnt++;
//         }
//     }
//     int k=0;
//     while(cnt--){
//         arr[k++]=0;
//     }
//     while(k<n){
//         arr[k++]=1;
//     }
// }

// method 2:-

// int sort(int arr[],int n){
//     int k=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             arr[k++]=0;
//         }
//     }
//     for(int i=k;i<n;i++){
//         arr[k++]=1;
//     }
// }

// method 3:-

void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int sort(int arr[],int n){
    int pivot=1;
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<pivot){
            swap(arr,i,j);
            j++;
        }
    }
}

int main() {
    int arr[]={1, 0, 1, 0, 1, 0, 0, 1};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
	return 0;
}
