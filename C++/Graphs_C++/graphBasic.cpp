

#include<bits/stdc++.h>
using namespace std;
class Edge{
   public:
   int src,nbr,wt;
   Edge(int src,int nbr,int wt){
      this->src=src;
      this->nbr=nbr;
      this->wt=wt;
   }
};
int main(){
   int vces=7;
   vector<Edge> graph[vces];
   for(int i=0;i<vces;i++){
      graph[i]=vector<Edge>();
   }
   graph[0].push_back(Edge(0,3,40));
   graph[0].push_back(Edge(0,1,10));
}
