#include<iostream>
using namespace std;

class Student {
    public:
    int roll;
    string name;

    void getData(){
        cout<<"Enter Name: "<<endl;
        cin>>name;

        cout<<"Enter Roll_Number: "<<endl;
        cin>>roll;
    }

    void showData(){
        cout<<"Name"<<name<<endl;
        cout<<"Roll_Number"<<roll<<endl;
    }
};

int main(){
    Student s[3];

       for(int i = 0; i < 3; i++) {
        s[i].getData();
    }
   
    for(int i = 0; i < 3; i++) {
        s[i].showData();
    }
}