// Q) What is encapsulation?
// A. Encapsulation means combining data and the functions that work on that data into a single unit, like      
//    a class.
// we use the encapsulation and use getter (getName) and setter (setName) method which are used to show and modify the private data.

#include<iostream>
using namespace std;

class Encap {
    private:          // access not given if getter and setter is not there
        string name;

    public:         // default is also public it access
        string getname(){
            return name;
        } 
        
        void setname(string newName){
            name = newName;
        }
};

int main(){
    Encap obj;
    obj.setname("Param");
    cout<<obj.getname()<<endl;
}