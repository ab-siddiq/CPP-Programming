#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int id;
    node* leftNode;
    node* rightNode;
    node* parentNode;
};
class BinaryTree{
    public:
    node* root;
    node* allNode[6];
    BinaryTree(){
        root=NULL;
    }
    node* CreateNewNode(int id){
        node* newNode = new node();
        newNode->id=id;
        newNode->leftNode=NULL;
        newNode->rightNode=NULL;
        newNode->parentNode=NULL;
        return newNode;
    }
    void buildBinaryTree(){
        
        for(int i=0;i<6;i++)
            allNode[i]=CreateNewNode(i);
        allNode[0]->leftNode=allNode[1];
        allNode[0]->rightNode=allNode[2];

        allNode[1]->leftNode=allNode[5];
        allNode[1]->parentNode=allNode[0];

        allNode[2]->leftNode=allNode[3];
        allNode[2]->rightNode=allNode[4];
        allNode[2]->parentNode=allNode[0];

        allNode[5]->parentNode=allNode[1];
        
        allNode[3]->parentNode=allNode[2];
        allNode[4]->parentNode=allNode[2];
        root=allNode[0];
    }
    void printBinaryTree(){
        for(int i=0;i<6;i++){
            int p=-1;
            int l=-1;
            int r=-1;
            if(allNode[i]->parentNode!=NULL)
                p=allNode[i]->parentNode->id;
            if(allNode[i]->leftNode!=NULL)
                l=allNode[i]->leftNode->id;
            if(allNode[i]->rightNode!=NULL)
                r=allNode[i]->rightNode->id;
            cout<<"Node "<<i<<": Parent = "<<p<<" , left node = "<<l<<" ,right node = "<<r<<"\n";
        }
    }
};
int main(){
    BinaryTree bt;
    bt.buildBinaryTree();
    bt.printBinaryTree();
}