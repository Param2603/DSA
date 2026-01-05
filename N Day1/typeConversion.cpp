// typeconvertion = convert one data type into another data type is known as typeconvertion
// types of convention = 1: implicit & 2: explicit

#include<iostream>
using namespace std;

int main(){
    int a = 50;
    float f = float(a) + 0.5;
    cout<<f<<endl;

    char s = 'S';
    int b = int(s);
    cout<<b;
}