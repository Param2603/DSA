#include<iostream>
using namespace std;

int x = 10;      // declare first 
int main(){      // main function
    int x = 20;

    cout<<"Hello"<<endl;
    cout<<x<<endl;  // x=20, call main function
    cout<<::x;  // :: => scope call outer function (x=10)
}