#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"A class"<<endl;
    }
    void  aClass(){
        cout<<"From class A"<<endl;
    }

};
class B:A{
    public:
    B(){
        cout<<"B class"<<endl;
    }
    void  aClass(){
        cout<<"From class B"<<endl;
    }

};
class C:B{
    public:
    C(){
        cout<<"C class"<<endl;
    }
    void  aClass(){
        cout<<"From class C"<<endl;
    }

};
class D:C{
    public:
    D(){
        cout<<"D class"<<endl;
    }
    void  aClass(){
        cout<<"From class D"<<endl;
    }

};
class E:D{
    public:
    E(){
        cout<<"E class"<<endl;
    }
    void  aClass(){
        cout<<"From class E"<<endl;
    }

};
class F:E{
    public:
    F(){
        cout<<"F class"<<endl;
    }
    void  aClass(){
        cout<<"From class F"<<endl;
    }

};
class G:F{
    public:
    G(){
        cout<<"G class"<<endl;
    }
    void  aClass(){
        cout<<"From class G"<<endl;
    }

};
class H:G{
    public:
    H(){
        cout<<"H class"<<endl;
    }
    void  aClass(){
        cout<<"From class H"<<endl;
    }

};

int main(){
    H h;
}