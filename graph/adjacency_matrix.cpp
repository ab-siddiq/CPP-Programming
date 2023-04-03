#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int adjacencyMatrix[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            adjacencyMatrix[i][j]=0;
        }
    }
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        adjacencyMatrix[u][v]=1;
        adjacencyMatrix[v][u]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<adjacencyMatrix[i][j]<<" ";
        cout<<"\n";
    }
}