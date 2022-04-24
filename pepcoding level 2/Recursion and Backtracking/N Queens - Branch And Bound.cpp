
#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<bool>> &arr,int row,vector<bool> &cols,vector<bool> &ndig,vector<bool> &rdig,string asf){
    if(row==arr.size()){
        cout<<asf<<"."<<endl;
        return;
    }
    for(int col=0;col<arr.size();col++){
      // condition for 
        if(!cols[col] and !ndig[row+col] and !rdig[row-col+arr.size()-1]){
          // first mark true for visited... 
            arr[row][col]=true;
            cols[col]=true;
            ndig[row+col]=true;
            rdig[row-col+arr.size()-1]=true;
          // call recursive function for next level exploring...
            solve(arr,row+1,cols,ndig,rdig,asf+to_string(row)+"-"+to_string(col)+", ");
          // now, the time for backtrack, means like unmarks all...
            arr[row][col]=false;
            cols[col]=false;
            ndig[row+col]=false;
            rdig[row-col+arr.size()-1]=false;
        }
    }
}

int main(){
    int n;
    cin>>n;
  // chess board...
    vector<vector<bool>> arr(n,vector<bool>(n));
  // for column mark...
    vector<bool> cols(n,false);
  // for normal diagonal...
    vector<bool> ndig(2*n-1,false);
  // for reverse diagonal...
    vector<bool> rdig(2*n-1,false);
  // call function...
    solve(arr,0,cols,ndig,rdig,"");
    return 0;
}
