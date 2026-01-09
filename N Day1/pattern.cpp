#include<iostream>
using namespace std;

int main(){
    cout<<"Pattern 1"<<endl;
    for(int i=0; i<5; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    } 

    cout<<"Pattern 2"<<endl;

    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    cout<<"Pattern 3"<<endl;

    
}