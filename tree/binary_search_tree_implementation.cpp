#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node* left;
    node* right;
};
class BinarySearchTree{
    public:
    node* root;
    BinarySearchTree(){
        root=NULL;
    }
    node* CreateNewNode(int value){
        node* newNode = new node;
        newNode->value=value;
        newNode->left=NULL;
        newNode->right=NULL;
        return newNode;
    }
    void InsertAtBinarySearchTree(int value){
        node* newNode = CreateNewNode(value);
        if(root==NULL){
            root = newNode;
            return;
        }
        node* prev=NULL;
        node* curr=root;
        while(curr!=NULL){
            if(newNode->value>curr->value){
                prev=curr;
                curr=curr->right;
            }else{
                prev=curr;
                curr=curr->left;
            }
        }
        if(newNode->value>prev->value){
            prev->right=newNode;
        }else{
            prev->left=newNode;
        }
    }
    void BFS(){
        queue<node*>q;
        q.push(root);
        while (!q.empty())
        {
            node* a = q.front();
            q.pop();
            int l=-1,r=-1;
            if(a->left!=NULL){
                l=a->left->value;
                q.push(a->left);
            }
            if(a->right!=NULL){
                r=a->right->value;
                q.push(a->right);
            }
            cout<<"Node value: "<<a->value<<" Left: "<<l<<" Right: "<<r<<"\n";
        }
        
    }
};
int main(){
    BinarySearchTree bst;
    bst.InsertAtBinarySearchTree(6);
    bst.InsertAtBinarySearchTree(9);
    bst.InsertAtBinarySearchTree(7);
    bst.InsertAtBinarySearchTree(5);
    bst.InsertAtBinarySearchTree(3);
    bst.InsertAtBinarySearchTree(4);
    bst.InsertAtBinarySearchTree(2);
    bst.BFS();
}