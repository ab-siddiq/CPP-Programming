#include<bits/stdc++.h>
using namespace std;
int main(){
    //pair<dataType,dataType> variable
    //pair can be nested as below;
    vector<pair<pair<pair<int,string>,string>,int>> p;
    // p.first.first.first=2954;  
    // p.first.first.second="Abu Bakkar";
    // p.first.second="Siddiq";
    // p.second=28;
    // cout<<p.first.first.first<<" "<<p.first.first.second<<" "<<p.first.second<<" "<<p.second;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string firstName,lastName;
        int eid,age;
        cin>>firstName;
        cin>>lastName;
        cin>>eid;
        cin>>age;
        p.push_back({{{eid,firstName},lastName},age});
    }
    for(int i=0;i<n;i++){
        cout<<p[i].first.first.first<<" "<<p[i].first.first.second<<" "<<p[i].first.second<<" "<<p[i].second<<"\n";
    }
}