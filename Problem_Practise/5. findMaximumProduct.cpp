
// find the maximum product of two integers in an array...


#include <bits/stdc++.h>
using namespace std;
           // method 1st...
           
// void findMaximumLength(int arr[],int n){
//     if(n<2){
//         return;
//     }
//     int max_p=INT_MIN;
//     int max_i,max_j;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(max_p<arr[i]*arr[j]){
//                 max_p=arr[i]*arr[j];
//                 max_i=i;
//                 max_j=j;
//             }
//         }
//     }
//     cout<<"("<<arr[max_i]<<","<<arr[max_j]<<")"<<endl;
// }
             // method 2nd...
             
// void findMaximumLength(int arr[],int n){
//     if(n<2){
//         return;
//     }
//     sort(arr,arr+n);
//     if(arr[0]*arr[1]>arr[n-1]*arr[n-2]){
//         cout<<"("<<arr[0]<<","<<arr[1]<<")"<<endl;
//     }
//     else if(arr[0]*arr[1]==arr[n-2]*arr[n-1]){
//         cout<<"{"<<"("<<arr[0]<<","<<arr[1]<<")"<<","<<"("<<arr[n-2]<<","<<arr[n-1]<<")"<<"}"<<endl;
//     }
//     else{
//         cout<<"("<<arr[n-2]<<","<<arr[n-1]<<")"<<endl;
//     }
// }
               // method 3rd...
void findMaximumLength(int arr[],int n){
    int max1=arr[0],max2=INT_MIN;
    int min1=arr[0],min2=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2){
            max2=arr[i];
        }
        if(arr[i]<min1){
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i]<min2){
            min2=arr[i];
        }
    }
    if(max1*max2>min1*min2){
        cout<<"("<<max1<<","<<max2<<")"<<endl;
    }
    else if(max2*max1==min1*min2){
        cout<<"{"<<"("<<max1<<","<<max2<<")"<<","<<"("<<min1<<","<<min2<<")"<<"}"<<endl;
    }
    else{
        cout<<"("<<min1<<","<<min2<<")"<<endl;
    }
}

int main(){
    int arr[]={-10,-3,5,6,-2};
    int n=sizeof(arr)/sizeof(int);
    findMaximumLength(arr,n);
    return 0;
}
