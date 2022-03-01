#include<bits/stdc++.h>

using namespace std;
   class Edge {
       public:
          int src;
          int nbr;
          int wt;

      Edge(int src, int nbr, int wt){
         this->src = src;
         this->nbr = nbr;
         this->wt = wt;
      }
   };
   void printAllPath(vector<Edge> graph[],int src,int dest,vector<bool> visited,string psf){
   if(src==dest){
      cout<<psf<<endl;
      return;
   }
   visited[src]=true;
   for(Edge edge:graph[src]){
      if(visited[edge.nbr]==false){
         printAllPath(graph,edge.nbr,dest,visited,psf+to_string(edge.nbr));
      }
   }
   visited[src]=false;
}
   int main(){
      int vtces;
      cin>>vtces;
      vector<Edge>graph[vtces];

      int edges;
      cin>>edges;
      for(int i = 0; i < edges; i++){
         int v1 ;
         int v2 ;
         int wt ;
         cin>>v1>>v2>>wt;
         graph[v1].push_back( Edge(v1, v2, wt));
         graph[v2].push_back( Edge(v2, v1, wt));
      }

      int src;
      cin>>src;
      int dest;
      cin>>dest;
      vector<bool> visited(vtces,false);
      printAllPath(graph,src,dest,visited,to_string(src)+"");
      return 0;
    }


// 7
// 8
// 0 1 10
// 1 2 10
// 2 3 10
// 0 3 10
// 3 4 10
// 4 5 10
// 5 6 10
// 4 6 10
// 0
// 6
