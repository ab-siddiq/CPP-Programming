#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node* Left;
    node* Right;
};
class BST{
    public:
    node* root;
    BST(){
        root=NULL;
    }
    node* CreateNewNode(int value){
        node* newNode = new node();
        newNode->value=value;
        newNode->Left=NULL;
        newNode->Right=NULL;
        return newNode;
    }
    void BFS(){
        if(root==NULL) return;
        queue<node*>q;
        q.push(root);
        while (!q.empty())
        {
            node* a = q.front();
            q.pop();
            int p=-1,l=-1,r=-1;
            if(a->Left!=NULL){
                l=a->Left->value;
                q.push(a->Left);
            }
            if(a->Right!=NULL){
                r=a->Right->value;
                q.push(a->Right);
            }
            cout<<"Node value = "<<a->value<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<"\n";
        }
        
    }
    void Insert(int value){
        node* newNode = CreateNewNode(value);
        if(root==NULL){
            root=newNode;
            return;
        }
        node* curr=root;
        node* prv=NULL;
        while(curr!=NULL){
            if(newNode->value > curr->value){
                prv=curr;
                curr=curr->Right;
            }else{
                prv=curr;
                curr=curr->Left;
            }
        }
        if(newNode->value > prv->value){
            prv->Right=newNode;
        }else{
            prv->Left=newNode;
        }
    }
};
int main(){
    BST bst;
    bst.Insert(4);
    bst.Insert(6);
    bst.Insert(5);
    bst.Insert(2);
    bst.Insert(3);
    bst.BFS();
}