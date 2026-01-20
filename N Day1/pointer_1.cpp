// Q) What is Pointer?
// A. it stores the address of another variable
//    Declaration of Pointer: int *p;


// example of basic demo pointer

#include<iostream>
using namespace std;

int main(){
    int x = 10;
    // int *p = &x;
    int *p = &x;        // x value stored in *p
    *p = x;

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<x<<endl;
}