#include<bits/stdc++.h>
using namespace std;
int nodes,edges;
const long long INF=1e9;
const int maxNode = 1e5;
long long d[maxNode];
bool negative_cycle=false;
long long parent[maxNode];
int last_updated_node = -1;
vector<pair<int,int>>adjacencyList[maxNode];
void bellmanFord(int src){
    for(int i=1;i<=nodes;i++){
        d[i]=INF;
    }
    d[src]=0;
    for(int i=1;i<=nodes;i++){
        for(int j=1;j<=nodes;j++){
            for(auto adj_entry:adjacencyList[j]){
                int selectedNode = j;
                int adjacentNode = adj_entry.first;
                int edgeCost = adj_entry.second;
                if(d[selectedNode]+edgeCost<d[adjacentNode]){
                    d[adjacentNode]=d[selectedNode]+edgeCost;
                    parent[adjacentNode]=selectedNode;
                    if(i==nodes) {
                    
                    negative_cycle = true;
                    last_updated_node=adjacentNode;
                    }
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
    if(negative_cycle) 
    {
        cout <<"YES\n";
        int selectedNode=last_updated_node;
        for(int i=1;i<=nodes-1;i++){
            selectedNode=parent[selectedNode];
        }
        int firstNode=selectedNode;
        vector<int>cycle;
        cycle.push_back(selectedNode);
        while (true)
        {
            selectedNode=parent[selectedNode];
            cycle.push_back(selectedNode);
            if(selectedNode==firstNode) break;
        }
        reverse(cycle.begin(),cycle.end());
        for(int node:cycle){
            cout<<node<<" ";
        }cout<<"\n";
        
    }
        
    else cout<<"NO\n";
    // for(int i=1;i<=nodes;i++){
    //     cout<<d[i]<<" ";
    // }cout<<"\n";
}