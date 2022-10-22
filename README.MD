# Array
- 
# Pointer
- One of the common use of pointer is with array
### Structre of a void pointer
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

### Pointer array
```C++
int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
}
```
- `cout<<arr<<endl;` will print the address of first element of the array. You can match trying `cout<<&arr[0]<<endl;`
