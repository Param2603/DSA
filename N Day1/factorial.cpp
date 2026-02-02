#include<iostream>
using namespace std;

int main(){
    int f=1, n;   // f=1 starting , n=any number

    cout<<"Enter Number:";
    cin>>n;

    for(int i=1; i<=n; i++){
        f*=i;  //f=f*i 
    }
    cout<<f;
}