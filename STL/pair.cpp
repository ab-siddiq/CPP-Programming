#include<bits/stdc++.h>
using namespace std;
int main(){
    //pair<dataType,dataType> variable
    //pair can be nested as below;
    pair<pair<pair<int,string>,string>,int> p;
    p.first.first.first=2954;  
    p.first.first.second="Abu Bakkar";
    p.first.second="Siddiq";
    p.second=28;
    cout<<p.first.first.first<<" "<<p.first.first.second<<" "<<p.first.second<<" "<<p.second;
}