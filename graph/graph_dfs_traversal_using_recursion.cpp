#include<bits/stdc++.h>
using namespace std;
const int maxNode=1000;
vector<int>adjacencyList[maxNode];
bool visited[maxNode];

void dfs(int src){
    visited[src]=true;
    cout<<src<<" ";
    for(int child: adjacencyList[src]){
        if(!visited[child]){
            dfs(child);
        }
    }
}
int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=1;i<=edges;i++){
        int u,v;
        cin>>u>>v;
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }
    for(int i=1;i<=nodes;i++){
        cout<<i<<" -> ";
        for(int list:adjacencyList[i]){
            cout<<list<<" ";
        }
        cout<<"\n";
    }
    dfs(1);
}