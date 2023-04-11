#include<bits/stdc++.h>
using namespace std;
int nodes,edges,INF=1e9;
const int maxNode = 1e5;
int d[maxNode];
vector<pair<int,int>>adjacencyList[maxNode];
void bellmanFord(int src){
    for(int i=1;i<=nodes;i++){
        d[i]=INF;
    }
    d[src]=0;
    for(int i=1;i<=nodes-1;i++){
        for(int j=1;j<=nodes;j++){
            for(auto adj_entry:adjacencyList[j]){
                int selectedNode = j;
                int adjacentNode = adj_entry.first;
                int edgeCost = adj_entry.second;
                if(d[selectedNode]+edgeCost<d[adjacentNode]){
                    d[adjacentNode]=d[selectedNode]+edgeCost;
                }
            }
        }
    }
}
int main(){
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adjacencyList[u].push_back({v,w});
    }
    bellmanFord(1);
    for(int i=1;i<=nodes;i++){
        cout<<d[i]<<" ";
    }cout<<"\n";
}