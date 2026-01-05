#include<iostream>
using namespace std;

int main(){

    int a, b, ch;

    cout<<"Enter First Number"<<endl;
    cin>>a;

    cout<<"Enter Second Number"<<endl;
    cin>>b;

    do{
        cout<<"1)Add 2)Sub 3)Mul  4)Div 5)Exit"<<endl;
        cin>>ch;

        switch (ch){
        case 1:
        cout<<"Addition is :"<<a+b<<endl;
        break;

        case 2:
        cout<<"Subtraction is :"<<a-b<<endl;
        break;

        case 3:
        cout<<"Multiplication is :"<<a*b<<endl;
        break;

        case 4:
        cout<<"Division is :"<<a/b<<endl;
        break;

        default:
        cout<<"Invalid operation"<<endl;
        break;
    }
    } 
    while(ch != 5);
}