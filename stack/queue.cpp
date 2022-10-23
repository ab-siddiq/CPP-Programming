#include<iostream>
#include<queue>
using namespace std;
void printQueue(queue<int> queue){
    while(!queue.empty()){
        cout<<"Queue element are: "<<queue.front()<<endl;
        queue.pop();
    }
}
int main(){
    queue<int>numbersQueue;
    numbersQueue.push(1);
    numbersQueue.push(2);
    numbersQueue.push(3);
    cout<<"Size of queue is: "<<numbersQueue.size()<<endl;
    cout<<"First element of Queue: "<<numbersQueue.front()<<endl;
    cout<<"Last element of Queue: "<<numbersQueue.back()<<endl;
    printQueue(numbersQueue);

}