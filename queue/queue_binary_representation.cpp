#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string>q;
    int n;
    cin>>n;
    q.push("1");
    for(int i=1;i<n;i++){
        cout<<"Binary representation of: "<<i<<": "<<q.front()<<"\n";
        string temp = q.front();
        q.pop();
        q.push(temp+"0");
        q.push(temp+"1");
    }
}