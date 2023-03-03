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
    node* allNode[6];
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
    void build_binary_tree(){
        for(int i=0;i<6;i++){
            allNode[i]=CreateNewNode(i);
        }
        allNode[0]->left=allNode[1];
        allNode[0]->right=allNode[2];

        allNode[1]->left=allNode[3];
        allNode[1]->right=allNode[4];
        allNode[1]->parent=allNode[0];

        allNode[2]->left=allNode[5];
        allNode[2]->parent=allNode[1];

        allNode[3]->parent=allNode[1];
        allNode[4]->parent=allNode[1];
        allNode[5]->parent=allNode[2];

        root=allNode[0];
    }

    void print_tree_info(){
       for(int i=0;i<6;i++){
         int p=-1, l=-1,r=-1;
         if(allNode[i]->parent!=NULL) p= allNode[i]->parent->id;
         if(allNode[i]->left!=NULL) l= allNode[i]->left->id;
         if(allNode[i]->right!=NULL) r= allNode[i]->right->id;
         cout<<"Node: "<<i<<": Parent = "<<p<<" , Left child = "<<l<<" , Right child = "<<r<<"\n";
       }
    }
};
int main(){
    BinaryTree bt;
    bt.build_binary_tree();
    bt.print_tree_info();
}