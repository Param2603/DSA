// Types of Functions:
#include<iostream>
using namespace std;

    // 1. TNRN (Take Nothing, Return Something)
    void Hello(){
        cout<<"Hello, my name is Param"<<endl;
    }

    // 2. TSRN (Take Something, Return Nothing)
    void add(int a, int b){
        cout<<"Sum is : "<<a+b<<endl;
    }

    // 3. TNRS (Take Nothing, Return Something)
    int getNumbert(){
        return 15;         // it return value only
    }
    // 4. TSRS (Take Something, Return Something)
    int multiply(int a, int b) {      //passing parameter
        return a * b;
}


    int main(){
        Hello();      //1.
        add(10, 20);  //2.
        int x = getNumbert();   //3.
        cout<<x<<endl;
        int result = multiply(5, 4); //4.  // passing argument for answer
        cout  << result << endl;
    }
    
