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
