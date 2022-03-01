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
bool hasPath(vector<Edge> graph[],int src,int dest,vector<bool> visited){
   if(src==dest){
      return true;
   }
   visited[src]=true;
   for(Edge edge:graph[src]){
      if(visited[edge.nbr]==false){
         bool hasNbrPath=hasPath(graph,edge.nbr,dest,visited);
         if(hasNbrPath==true){
            return true;
         }
      }
   }
   return false;
}
int main(){
   int vtces,edges;
   cin>>vtces>>edges;
   vector<Edge> graph[vtces];
   for(int i=0;i<edges;i++){
      int v1,v2,wt;
      cin>>v1>>v2>>wt;
      graph[v1].push_back(Edge(v1,v2,wt));
      graph[v2].push_back(Edge(v2,v1,wt));
   }
   int src,dest;
   cin>>src>>dest;
   vector<bool> visited(vtces,false);
   bool path=hasPath(graph,src,dest,visited);
   if(path==1){
      cout<<"true"<<endl;
   }
   else{
      std::cout << "false" << std::endl;
   }
   return 0;
}


// 7 -> vertex
// 8 -> edges
// 0 1 10 -> src,dest,wt...
// 1 2 10
// 2 3 10
// 0 3 10
// 3 4 10
// 4 5 10
// 5 6 10
// 4 6 10
// 0 ->src...
// 6 ->dest...
