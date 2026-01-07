#include<iostream>
using namespace std;

int main(){
    cout<<"By using for loop"<<endl;
    for(int i=1; i<=10; i++){
        cout<<i<<endl;
    }

    cout<<"By using while loop"<<endl;

    int a = 1;
    while(a<=10){
        cout<<a<<endl;
        a++;
    }

    cout<<"By using do-while loop";

    int b = 1;
    do{
        cout<<b<<endl;
        b++;
    } while(b<=10);
}