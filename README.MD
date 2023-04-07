# Array
- An array is type of collection which stores elements in continuous memory. That means an array store it's elements one after the another.
## Advantage
- Accessing of array elements are very fast as they are store one after another
- Access of array elements can be direct. We need the array name and the index of that element.
## Diadvantage
- But problem is when we insert or delete any element to an array the process is slow.
- Size of the array had to be known at compile time
- Size of the array cannot be change once declared. But in dynamic array size of array can be change during compile time.
### Array dynamic memory allocation and deallocation
- `int* arr = new int[size];` in this way we can create dynamic memory allocation. Here keyword `new` allocate a memory for `int* arr` pointer. `int[size]` variable `size` will be the size of the dynamic array.
- There are two ways to deallocate or delete dynamic array while their is no need of that array in order to free space
    - `delete[] arr;` is one way. But in this way it may cause system crush
    - `arr = NULL;` is the best practice to deallocate dynamic array
# Vector

# Array vs Vector
- Array size can be changed on run time while vector size can be changed
- Vector provide some build in functionlity which help the user to use it.
# Pointer
- One of the common use of pointer is with array
## Structre of a void pointer/ dynamic type pointer
```C++
void print(void*ptr,char type){
    switch (type){
        case 'i': cout<<*((int*)ptr)<<endl;break;
        case 'c': cout<<*((char*)ptr)<<endl;break;
    }
    
}
```

- `void print(void*ptr,char type)` here in this function, parameter `void*ptr` will receive any type of value passed by and the parameter `char type` will recieve the type of that variable
- ` (int*)ptr ` is used for type casting
-  ` *((int*)ptr) ` to dereference the pointer

## Pointer array
```C++
int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
}
```
- `cout<<arr<<endl;` will print the address of first element of the array. You can match trying `cout<<&arr[0]<<endl;`. That means that the name of an array is the address of first element of that array.

We can access array elements using pointer
```C++
for(int i =0; i<5;i++){
        cout<<"Num "<<i+1<<": ";
        cin>>*(arr+i);
    }
```
- `cin>>*(arr+i);` `*(arr+i)` means that assigning value in the i'th position of the array. It is exactly same as what `arr[i]` do.
```C++
for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
```

```C++
int main(){
    int arr[5] = {1,3,9,-2,6};
    int min = arr[0];
    int max = arr[0];
    minMax(arr,5,&min,&max);
    cout<<"Min: "<<min<<endl<<"Max: "<<max;
}
```
- `minMax(arr,5,&min,&max);` in this function `&min. &max` means that the function is passing reference of those two variables. In this way we can directaly change the value of that variable without returing anything from the function whom it is passed.
```C++
void minMax(int arr[],int size,int* min, int* max){
    for(int i=1;i<size;i++){
        if(arr[i]> *max){
            *max = arr[i];
        }
         if(arr[i]< *min){
            *min = arr[i];
        }
    }
}
```
- The way passing reference using pointer a function acheive the ability to return multiple value;
- Using pointer we can return muliple value from a function like above function ex- `minMax(int arr[],int size,int* min, int* max)`
# Linked list
- A linked list is a linear data structure which store list of values.
- Linked list is used to store data and organize data.
- But unlike arrays it is not store data continouly or one after another.
- Each element of a link list has two thing
    - `First one is the value`
    - `Second one is the address or pointer to the next element`
    - `The last element` of a linked list `doesnot contain any address or pointer but NULL` that beacuase is there are `no next elements` that's why it contain an address of `NULL` or point to `NULL`.

## Advantage
- Linked list has dynamic memory size where array has fixed size
- Data insert and delete are easy
## Disadvantage
- Random access of linked list are not allowed
- It need more memory as it have to store two thing. One is data and another is the memory address to the next element.
```C++
//custom class Node, name can be anything but most commonly name Node is used
class Node{
    public:
        int value; //for the value of a linked list
        Node* next; //for the pointer of a linked list which will point to the next element of a linked list
};
//function that print the values of a linked list
void printList(Node*n){
    while(n != NULL){
        cout<<n->value;
        n = n->next;
    }
}

int main(){
    //creating theree value of a linked list
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    //assiging values and the pointer of next element of a linked list
    head->value = 1;
    head->next = second;
    second-> value = 2;
    second->next = third;
    third->value = 3;
    third->next = NULL;
    //passing the head reference to the linked list print function to print values
    printList(head);

}
```
# Data Structure
- Data Structure is a way of `data organization`, `management` and `storage` format that enable `efficient access` and `modification`.
- In a simple word, data structure is a way, in which data is stored in a computer.

## Stack
- FILO-First In Last Out
- LIFO-Lasr In First Out
- LCFS-Last Come First Serve
- Ex- Undo operation in editior or word, Back button
- Five function that are associated with queue
    - push()
    - pop()
    - top()
    - empty()
    - size()
## Queue
- FIFO-First In First Out
- FCFS-First Come First Serve
## Deque
- 
# STL
### When we need queue?
- WHen we need things happen exact order they were called but computer cannot keep up speed and execute those thing first enough first enough then we need to put those things in a queue.
- Ex-The way printer printed the paper
- Function associated to queue
    - push()
    - pop()
    - front()
    - back()
    - empty()
    - size()
## Tree
- Has 0 to n nodes
- Only root don't have any parent
- Every node or child can have only one parent
- There can't have to have any cicle (start from one end and end at starting

![image](https://user-images.githubusercontent.com/24230435/220173513-e5e856f2-4b78-42a2-b744-8087fd2a0bb8.png)

### BFS - Breadth First Search
- Visit level wise

![image](https://user-images.githubusercontent.com/24230435/222434043-b0954087-4fe4-45a3-9bda-97982f9b6b59.png)

Simulation   
- First root node is push to the queue
- step 1 => queue = {0}
- step 2 => pop(0), push 0 left and right child, queue = {1,2}   
- step 3 => pop(1) push 1 left and right child, queue = {2,3,4}
- step 4 => pop(2), push 2 left and right child queue = {3,4,5,6}
- step 5 => pop(3) push 3 left and right child, queue = {4,5,6} [3 left and right is null so nothing will push]
- step 6 => pop(4), push 4 left and right child, queue = {5,6} [4eft and right is null so nothing will push]
- step 7 => pop(5), push 5 left and right child, queue = {6} [5 eft and right is null so nothing will push]
- step 8 => pop(6}, push 6 left and right child, queue = {} [6left and right is null so nothing will push]   
Note: as queue is empty all node has been visited

### Binary Tree
- Every node have atmost(not more) two child

![image](https://user-images.githubusercontent.com/24230435/220174313-777d971e-af5d-4404-a31e-f21f9dc0d213.png)

Types of binary tree
1. Full Binary Tree - Every node has 0 or 2 children `Not full binary tree not complete binary tree`

![image](https://user-images.githubusercontent.com/24230435/220174908-ecde515b-eab6-4d15-9cc4-e8a30bda4b14.png)

2. Complete Binary Tree - All level filled up except last level `Not full binary tree not perfect binary tree`

![image](https://user-images.githubusercontent.com/24230435/220175742-ea52a51e-5b06-4858-b5f9-73765f70d860.png)

3. Perfect Binary Tree - Every level filled up. `Every perfect binary tree is complete binary tree`

![image](https://user-images.githubusercontent.com/24230435/220176893-4b5eca9c-507d-48df-a771-add12baba680.png)

### Binary Search Tree
- If we pick a node all node of left side of that node is small and right side of that node is greated is a binary search tree
BFS-Breadth First Search - visit level wise

![image](https://user-images.githubusercontent.com/24230435/220210807-4c5c9a55-cc6f-4594-8db7-41226b613598.png)

## Graph
- Use to find path 
- Have node/vertex
- Have edge (pair of node)

![image](https://user-images.githubusercontent.com/24230435/220172835-1b2462ea-e63f-4812-b9c8-650316d35ecb.png)

### Variatio of graphs
- Weighted Graph
- Unweighted Graph

![image](https://user-images.githubusercontent.com/24230435/222952913-e35d2167-8d69-40e0-9b08-e9f9450f1c8e.png)

- Directed graph
- Undirected graph

![image](https://user-images.githubusercontent.com/24230435/222953851-075a0d2e-b868-45d0-a0db-70c0c78e1e06.png)

Noted: A directed or undirected graph can be weighted or unweighted

- Bipartite graph => If we divide a grap by two part one part can be connected to another part but can not be connected inside the node in same part

![image](https://user-images.githubusercontent.com/24230435/222954861-fb286fce-a899-407a-8649-6eeb29d2600d.png)

- Complete graph => a graph which all node is connected with each other is called complete graph

![image](https://user-images.githubusercontent.com/24230435/222955029-fad548b4-4cdb-4e7b-8cdf-719c8fde9ae7.png)

### Graph Representation
- Adjacency Matrix  

![image](https://user-images.githubusercontent.com/24230435/223105160-c3dfc443-6963-41a0-8baa-3e52178f3be1.png)

![image](https://user-images.githubusercontent.com/24230435/223110155-d44c754c-ec98-48e8-9866-38d8b5a98a6d.png)




- Adjacency List



- Edge List

## STL - Standartd Template Library 
- Vector
- Stack
- Queue
- Deque
- Priority Queue
- Set
- Multiset
- Map

## Topological sort
- graph should be directed
- there is no cycle in the graph
- topological sort of a directed graph is linear orderning of its vertices such that every directed edge UV from vertices U to V, where U comes before V. U -----> V.
