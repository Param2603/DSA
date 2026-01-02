#include<iostream>
using namespace std;

class Addition {
    public:
    int a;
    int b;

    void addition(){
        cout<<"Enter first number :";
        cin>>a;

        cout<<"Enter second number :";
        cin>>b;

        cout<<"Addition is :"<<a+b;
    }
};

int main(){
    Addition a1;
    a1.addition();
}