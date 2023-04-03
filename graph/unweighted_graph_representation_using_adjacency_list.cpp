#include<bits/stdc++.h>
using namespace std;
const int maxNode = 100;
int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    vector<pair<int,int> >adjacencyList[maxNode];
    for(int i=1;i<=edges;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adjacencyList[u].push_back({v,w});
        adjacencyList[v].push_back({u,w});
    }
    for(int i=1;i<=nodes;i++){
        cout<<i<<" -> ";
        for(auto list:adjacencyList[i])
            cout<<"{ "<<list.first<<" , "<<list.second<<" } ";
        cout<<"\n";
    }
}