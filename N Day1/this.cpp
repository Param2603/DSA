#include<iostream>
using namespace std;

class A{
   
    public:
        int x, y;
        void add(int x, int y){   //function void (does not return) 
            this->x = x;    // ->: arrow operator it is used to access members of an object through a pointer.
            this->y = y;  // this: it is a pointer to the current object
            cout<<x+y;
        }
};

int main(){
   
    A obj;
    obj.add(10, 10);  //call function & it give value
}