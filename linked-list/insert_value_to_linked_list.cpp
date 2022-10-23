#include<iostream>
using namespace std;
class Node{
    public:
        int value;
        Node* next;
};
void insertBeginingOfNode(Node** head,int newValue){
    //Createing a new node
    Node* newNode = new Node();
    //assigning value to the new node
    newNode->value = newValue;
    //move the head to newNode
    newNode->next = *head;
    //current is newNode
    *head = newNode;
    
}
void insertEndOfNode(Node** head, int newValue){
    //create new node
    Node *newNode = new Node();
    newNode->value = newValue;
    newNode->next = NULL;
    //check empty
    if(*head==NULL){
        *head=newNode;
        return;
    }
    //find last node
    Node* last = *head;
    while(last->next !=NULL){
        last = last->next;
    }
    //insert newNode to last
    last->next = newNode;
}
void printNode(Node* n){
    
    while(n!=NULL){
        cout<<n->value<<"=>";
        n = n->next;
    }

}
int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1; 
    head->next = second;
    second->value = 2;
    second->next = third;
    third->value =3;
    third->next = NULL;

    insertBeginingOfNode(&head,-1);
    insertBeginingOfNode(&head,-2);
    insertBeginingOfNode(&head,-3);
    insertEndOfNode(&head,4);
    printNode(head);


}