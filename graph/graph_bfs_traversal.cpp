#include<bits/stdc++.h>
using namespace std;
const int maxNode = 1000;
vector<int>adjacencyList[maxNode];
bool visited[maxNode];
void bfs(int src){
    queue<int>q;
    cout<<src<<" ";
    visited[src]=true;
    q.push(src);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for(int child:adjacencyList[node]){
            if(!visited[child]){
                visited[child]=true;
                q.push(child);
                cout<<child<<" ";
            }
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
    bfs(1);
}