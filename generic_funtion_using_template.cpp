#include<iostream>
using namespace std;
template<typename T>
void Swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){

    int a =5, b = 6;

    Swap<int>(a,b);
    cout<<a<<", "<<b<<endl;

    char a1 = 'x', b1 = 'y';
    Swap<char>(a1,b1);
    cout<<a1<<", "<<b1<<endl;

}
