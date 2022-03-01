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
   void printAllPath(vector<Edge> graph[],int src,int dest,vector<bool> visited,string ans){
      if(src==dest){ // base case...
         cout<<ans<<endl;
         return;
      }
      visited[src]=true; // mark visited...
      for(Edge edge:graph[src]){ // call in neighber...
         if(visited[edge.nbr]==false){ // check neighber...
            printAllPath(graph,edge.nbr,dest,visited,ans+to_string(edge.nbr)); // call recursive function...
         }
      }
      visited[src]=false; // because it give us all possible path -->> see example...
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
      vector<bool> visited(vtces,false); // visited arraylist...
      printAllPath(graph,src,dest,visited,to_string(src)+""); // in starting print source + empty stirng...
      return 0;
      // write your code here
      
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
