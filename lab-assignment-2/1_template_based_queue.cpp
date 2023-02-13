#include <bits/stdc++.h>
using namespace std;
template<class T>
class Queue
{
public:
    int l, r, size;
    T *a;
    T array_capacity;
    Queue()
    {
        l = 0;
        r = -1, size = 0;
        a = new T[1];
        array_capacity = 1;
    }
    void removeCicular()
    {
        T *temp = new T[array_capacity];
        int index = 0;

        for (int i = l; i < array_capacity; i++)
        {
            temp[index] = a[i];
            index++;
        }
        for (int i = 0; i <= r; i++)
        {
            temp[index] = a[i];
            index++;
        }
        swap(a, temp);
        l = 0;
        r = array_capacity - 1;
        delete[] temp;
    }
    void increaseSize()
    {
        if (l > r)
        {

            removeCicular();
        }
        T *temp = new T[array_capacity * 2];
        for (int i = 0; i < array_capacity; i++)
            temp[i] = a[i];
        swap(a, temp);
        array_capacity = array_capacity * 2;
        delete[] temp;
    }
    void Enqueue(T value)
    {
        if (size == array_capacity)
        {
            increaseSize();
        }
        r++;
        if (r == array_capacity)
        {
            r = 0;
        }
        a[r] = value;
        size++;
    }
    void Dequeue()
    {
        if (size == 0)
        {
            cout << "Queue is empty!\n";
            return;
        }
        l++;
        if (l == array_capacity)
        {
            l = 0;
        }
        size--;
    }
    T Front()
    {
        if (size == 0)
        {
            cout << "Queue is empty!\n";
            return -1;
        }
        return a[l];
    }
    int Size()
    {
        return size;
    }
};
int main()
{
    Queue<char> q;
    q.Enqueue('a');
    q.Enqueue('b');
    q.Enqueue('c');
    q.Enqueue('d');
    q.Enqueue('e');
    cout << "Size: " << q.Size() << "\n";
    cout << "Front: " << q.Front() << "\n";
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    cout<<"Size: "<<q.Size()<<"\n";
    cout<<"Front: "<<q.Front()<<"\n";
    q.Enqueue('f');
    q.Enqueue('g');
    cout<<"Size: "<<q.Size()<<"\n";
    cout<<"Front: "<<q.Front()<<"\n";
     q.Dequeue();
    q.Dequeue();
    cout<<"Size: "<<q.Size()<<"\n";
    cout<<"Front: "<<q.Front()<<"\n";
    q.Enqueue('h');
    q.Enqueue('i');
    cout<<"Size: "<<q.Size()<<"\n";
    cout<<"Front: "<<q.Front()<<"\n";
}