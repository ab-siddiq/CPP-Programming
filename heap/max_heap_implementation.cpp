#include<bits/stdc++.h>
using namespace std;
/*
    LEFT CHILD OF i 2i+1
    RIGHT CHILD OF i 2i+2
    PARENT i-1/2
*/
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
    void down_heapify(int idx){
        while (1)
        {
            int largest = idx;
            int l = 2*idx+1;
            int r = 2*idx+2;
            if(l<nodes.size() && nodes[largest]<nodes[l]) largest=l;
            if(r<nodes.size() && nodes[largest]<nodes[r]) largest=r;
            if(largest==idx) break;
            swap(nodes[idx],nodes[largest]);
            idx=largest;
        }
        
    }
    void Delete(int idx){
        if(idx>=nodes.size()) return;
        swap(nodes[idx],nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }
    void PrintHeap(){
        for(int i=0;i<nodes.size();i++){
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
    }
    int getMax(){
        if(nodes.empty()){
            cout<<"Heap is empty!\n";
            return -1;
        }
        return nodes[0];
    }
    int getMin(){
        if(nodes.empty()){
            cout<<"Heap is empty!\n";
            return -1;
        }
        int min=nodes[0];
        for(int i=0;i<nodes.size();i++){
            if(min>nodes[i]) min =nodes[i];
        }
        return min;
    }
};
int main(){
    MaxHeap mh;
    // mh.insert(8);
    // mh.insert(7);
    // mh.insert(4);
    // mh.insert(6);
    // mh.insert(5);
    // mh.insert(3);
    // mh.insert(2);
    // mh.insert(12);
    mh.insert(8);
    mh.insert(7);
    mh.insert(6);
    mh.insert(4);
    mh.insert(3);
    mh.insert(1);
    mh.insert(2);
    mh.PrintHeap();
    mh.Delete(0);
    mh.PrintHeap();
    cout<<mh.getMax()<<"\n";
    cout<<mh.getMin()<<"\n";
}