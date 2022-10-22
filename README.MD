//structre of a void pointer
```
void print(void*ptr,char type){
    switch (type){
        case 'i': cout<<*((int*)ptr)<<endl;break;
        case 'c': cout<<*((char*)ptr)<<endl;break;
    }
    
}
```
- ``` (int*)ptr ``` is used for type casting
-  ``` *((int*)ptr) ``` to derence the pointer