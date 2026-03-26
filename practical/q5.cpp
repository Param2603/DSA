// Q.5) Find minimum element in a stack.

#include<iostream>
using namespace std;

int main() {
    int stack[] = {10, 5, 20, 2, 15, 1};
    int n = 6;   

    int min = stack[0];

    for (int i = 1; i < n; i++) {
        if (stack[i] < min) {
            min = stack[i];
        }
    }
    cout << "Minimum element in stack: " << min;
}