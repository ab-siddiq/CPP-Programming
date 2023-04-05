#include<bits/stdc++.h>
using namespace std;
int nodes,edges;
const int maxNode = 1e5+5;
const int INF = 1e5;
vector<pair<int,int>>adjacencyList[maxNode];
int d[maxNode],visited[maxNode];
/*
            w
    u ---------- > v
      ---------- > x
            a
    u -> (v,w), (x,a)

*/
void dijkstra(int src){
    for(int i=1;i<=nodes;i++){
        //initialize all node to infinity
        d[i]=INF;
    }
    //initialize the starting node to zero
    d[src]=0;
    for(int i=0;i<nodes;i++){
        int selectedNode = -1;
        for(int j=1;j<=nodes;j++){
            //if visited then skip
            if(visited[j]==1) continue;
            //pick a unvisited node with minimum distance
            // selectedNode==-1 means no node is selected yet
            if(selectedNode==-1 || d[selectedNode] > d[j]){
                selectedNode=j;
            }
        }
        //make the selected node as visited
        visited[selectedNode]=1;
        //traverse all adjacent node of selected node
        for(auto adj_entry:adjacencyList[selectedNode]){
            int adj_node = adj_entry.first;
            int edge_cost = adj_entry.second;
            // if the the selected node cost is less then current node 
            if(d[selectedNode]+edge_cost <d[adj_node]){
                //then change currrent node cost to selected node cost
                d[adj_node]=d[selectedNode]+edge_cost;
            }
        }
    }
}
int main(){
    cin>>nodes>>edges;
    for(int i=1;i<=edges;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adjacencyList[u].push_back({v,w});
        adjacencyList[v].push_back({u,w});
    }
    dijkstra(1);
    for(int i=1;i<=nodes;i++){
        cout<<d[i]<<" ";
    }
    cout<<"\n";

}