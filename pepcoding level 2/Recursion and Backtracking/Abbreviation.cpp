
#include<bits/stdc++.h>
using namespace std;
void solution(string str,string asf,int cnt,int pos){
    // base case...
    if(str.length()==pos){
        if(cnt>0){
            cout<<asf<<cnt<<endl;
        }else{
            cout<<asf<<endl;
        }
        return;
    }
    // call for yes...
    if(cnt>0){
        solution(str,asf+to_string(cnt)+str[pos],0,pos+1);
    }
    else{
        solution(str,asf+str[pos],0,pos+1);
    }
    // call for no...
    solution(str,asf,cnt+1,pos+1);
}
int main(){
    string str;
    cin>>str;
    // call...
    solution(str,"",0,0);
    return 0;
}


// this is based on level and option...
// level => word...
// option => yes and no call...
// in yes call => make cnt=0,pos++,
// in no call=> cnt++,pos++,
