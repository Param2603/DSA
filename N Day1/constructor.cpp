// Q) What is constructor?
// A. it runs after object initialized (run by own)
    //   in constructor class and function name is same for example:
    //   class A{
    // public:
    // int a, b;

    //  void A(){
    //     //initialize
    //  }}
    // constructor runs first in any class (if cout is in last then display first)
    // it does not have any return type

// constructor example (oop concept)    


#include<iostream>
using namespace std;



class A{
    public:
    int a, b;

      A(){          // A is constructor (same class & function)
        a = 20;
        b = 20;
        cout<<a+b<<endl;   // perform any function
    }
};

int main(){
    A obj;    //constructor is auto call
}
