#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
        structure of map
        map<dataType,dataType> variable;
        Why map is special?
        1. keys in map are always unique. No duplicate keys.
        2. keys are in sorted order in map
        3. solve problems in O(logn). solve problem in very optimize way
        4. map has so many build in function
        5. values are 0 initially in map
    */
   int n;
   cin>>n;
   map<int,int>mp;
   for(int i=1;i<=n;i++){
    int in;
    cin>>in;
    mp[in]++;
   }
   /*
    map can be print in two ways.
    1. foreach => for(auto iterator:map variable)
    2. key value pair => for(pair<int,int>p:mp)
   */
//    for(pair<int,int>p:mp){
//     cout<<p.first<<" "<<p.second<<"\n";
//    }
   for(auto p:mp){
    cout<<p.first<<" "<<p.second<<"\n";
   }
}