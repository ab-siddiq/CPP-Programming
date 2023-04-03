#include <bits/stdc++.h>
using namespace std;
/*
    vector<int>v[5]
    meaning of above syntex is vector inside vector
    example-
    v[1].push_back(2);
    v[1].push_back(5);
    v[1].push_back(1);
    meaning is in the position of v1, elements are 2,5,1
*/
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    vector<int>adjacencyList[nodes+1];
    for(int i=1;i<=edges;i++){
        int u,v;
        cin>>u>>v;
        //for directed graph just comment the second line 
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }
    for(int i=1;i<=nodes;i++){
        cout<<i<<" -> ";
        for(auto list:adjacencyList[i])
            cout<<list<<" ";
        cout<<"\n";
    }
}