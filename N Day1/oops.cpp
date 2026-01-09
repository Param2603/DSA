// concept of oops

#include<iostream>
using namespace std;

class A{
    public:
    int a, b;

     void add(){    //  void = to create function orvoid does not return anything
        a = 10;
        b = 20;
        cout<<a+b<<endl;
    }

    void sub(){   
        a = 10;
        b = 20;
        cout<<a-b<<endl;
    }

    void mul(){    
        a = 10;
        b = 20;
        cout<<a*b<<endl;
    }

    void div(){    
        a = 10;
        b = 20;
        cout<<a/b<<endl;
    }
};

int main(){
    A obj;
    obj.add();
    obj.mul();
}