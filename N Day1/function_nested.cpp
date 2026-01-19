// Nested Function: function within the function

#include<iostream>
using namespace std;

    void display() {
    cout << "Welcome!" << endl;
}
    void show() {
    display();
}

int main() {
    show();
}