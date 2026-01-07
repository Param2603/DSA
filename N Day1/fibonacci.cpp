#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 0, b = 1, c;

    cout << "Enter number of terms: ";
    cin >> n;

    if (n >= 1)
        cout << a << " ";

    if (n >= 2)
        cout << b << " ";

    for (int i = 3; i <= n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}