
#include<bits/stdc++.h>
using namespace std;
void solution(string str,string asf,int cnt,int pos){
    if(str.length()==pos){
        if(cnt>0){
            cout<<asf<<cnt<<endl;
        }else{
            cout<<asf<<endl;
        }
        return;
    }
    if(cnt>0){
        solution(str,asf+to_string(cnt)+str[pos],0,pos+1);
    }
    else{
        solution(str,asf+str[pos],0,pos+1);
    }
    solution(str,asf,cnt+1,pos+1);
}
int main(){
    string str;
    cin>>str;
    solution(str,"",0,0);
    return 0;
}
