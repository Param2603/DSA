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

        cout<<"Addition is :"<<a+b<<endl;
    }
};

class Subtraction{
    public:
    int c;
    int b;

    void subtraction(){
        cout<<"Enter first number :";
        cin>>c;

        cout<<"Enter second number :";
        cin>>b;

        cout<<"Subtraction is :"<<c-b<<endl;
    }
};

class Multiplication{
    public:
    int c;
    int b;

    void multiplication(){
        cout<<"Enter first number :";
        cin>>c;

        cout<<"Enter second number :";
        cin>>b;

        cout<<"Multiplication is :"<<c*b<<endl;
    }
};

class Division{
    public:
    int c;
    int b;

    void division(){
        cout<<"Enter first number :";
        cin>>c;

        cout<<"Enter second number :";
        cin>>b;

        cout<<"Division is :"<<c/b;
    }
};

int main(){
    Addition a1;
    Subtraction a2;
    Multiplication a3;
    Division a4;
    a1.addition();
    a2.subtraction();
    a3.multiplication();
    a4.division();
}