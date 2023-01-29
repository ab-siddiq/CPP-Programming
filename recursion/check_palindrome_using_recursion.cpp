#include<bits/stdc++.h>
using namespace std;
int checkPalindrome(string str, int s,int e){
    if(s==e) return 1;
    if(str[s]!=str[e]) return 0;
    return checkPalindrome(str,s+1,e-1);
}
int main(){
    string s;
    cin>>s;
    int n = s.size()-1;
    if(checkPalindrome(s,0,n)) cout<<"Yes\n";
    else cout<<"No\n";
    
}