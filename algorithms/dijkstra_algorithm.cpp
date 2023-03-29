#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
// const long long int INF = 1e18;
const int INF = 1e9;
int nodes,edges;
vector<pair<int,int>> adj_list[N];
/*
            w
    u ---------- > v
      ---------- > x
            a
    u -> (v,w), (x,a)

*/
int d[N], visited[N];
void dijkstra(int src){
    for(int i=1;i<=nodes;i++){
        d[i]=INF;
    }
    d[src]=0;
    for(int i=0;i<nodes;i++){
        int selectedNode = -1;
        for(int j=1;j<=nodes;j++){
            if(visited[j]==1) continue;
            if(selectedNode==-1 || d[selectedNode]>d[j]){
                selectedNode = j;
            }
        }
        visited[selectedNode]=1;
        for(auto adj_entry:adj_list[selectedNode]){
            int adj_node = adj_entry.first;
            int edge_cst = adj_entry.second;
            if(d[selectedNode]+edge_cst < d[adj_node]){

            }
        }
    }
}
int main(){
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        int u,v,w;
        cin>>u>>v>>w ;
        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});
    }
    int src=1;
    dijkstra(src);
    for(int i=1;i<=nodes;i++){
       cout<<d[i]<<" "; 
    }
}