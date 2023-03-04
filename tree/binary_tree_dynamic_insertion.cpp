#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int id;
    node* left;
    node* right;
    node* parent;
};
class BinaryTree{
    public:
    node* root;
    BinaryTree(){
        root=NULL;
    }
    node* CreateNewNode(int id){
        node* newNode = new node;
        newNode->id=id;
        newNode->left=NULL;
        newNode->right=NULL;
        newNode->parent=NULL;
        return newNode;
    }
    void InsertIntoBinaryTree(int id){
        node* newNode = CreateNewNode(id);
        if(root==NULL){
            root=newNode;
            return;
        }
        queue<node*>q;
        q.push(root);
        while (!q.empty())
        {
            node* a = q.front();
            q.pop();
            if(a->left!=NULL) q.push(a->left);
            else {
                a->left=newNode;
                newNode->parent=a;
                return;
            }
            if(a->right!=NULL) q.push(a->right);
            else{
                a->right=newNode;
                newNode->parent=a;
                return;
            }

        }
        
    }
    void BFS(){
        queue<node*>q;
        q.push(root);
        while (!q.empty())
        {
            node* a = q.front();
            q.pop();
            int l=-1,r=-1,p=-1;
            if(a->left!=NULL){
                l=a->left->id;
                q.push(a->left);
            }
            if(a->right!=NULL){
                r=a->right->id;
                q.push(a->right);
            }
            if(a->parent!=NULL){
                p=a->parent->id;
            }
            cout<<"Node id= "<<a->id<<" , Left Child = "<<l<<" , Right Child = "<<r<<" Parent = "<<p<<"\n";
        }
        
    }
};
int main(){
    BinaryTree bt;
    bt.InsertIntoBinaryTree(1);
    bt.InsertIntoBinaryTree(2);
    bt.InsertIntoBinaryTree(3);
    bt.InsertIntoBinaryTree(4);
    bt.InsertIntoBinaryTree(5);
    bt.InsertIntoBinaryTree(6);
    bt.InsertIntoBinaryTree(7);
    bt.InsertIntoBinaryTree(8);
    bt.BFS();
}