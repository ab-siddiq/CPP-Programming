#include<bits/stdc++.h>
using namespace std;
class MaxHeap{
    public:
    vector<int>nodes;
    MaxHeap(){

    }
    void up_heapify(int index){
        while (index>0 && nodes[index]>nodes[(index-1)/2])
        {
            swap(nodes[index],nodes[(index-1)/2]);
            index=(index-1)/2;
        }
        
    }
    void insert(int value){
        nodes.push_back(value);
        up_heapify(nodes.size()-1);
    }
    void PrintHeap(){
        for(int i=0;i<nodes.size();i++){
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
    }
};
int main(){
    MaxHeap mh;
    mh.insert(8);
    mh.insert(7);
    mh.insert(4);
    mh.insert(6);
    mh.insert(9);
    mh.insert(11);
    mh.PrintHeap();
}