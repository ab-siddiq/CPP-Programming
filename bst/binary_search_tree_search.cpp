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
    bool Search(int value){
        node* curr = root;
        while (curr!=NULL)
        {
            if(value>curr->value){
                curr =curr->Right;
            }else if(value<curr->value){
                curr=curr->Left;
            }else{
               return true;
            }
        }
            return false;  
    }
};
int main(){
    BST bst;
    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);
    cout<<bst.Search(10)<<"\n"; //1
    cout<<bst.Search(9)<<"\n"; //1
    cout<<bst.Search(20)<<"\n"; //1
    cout<<bst.Search(60)<<"\n"; //0

}