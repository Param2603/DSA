// Q.3) Check if a string is palindrome.  ("reverse same")

#include<iostream>
using namespace std;

bool isPalindrome(string str) {
    int start = 0;                   
    int end = str.length() - 1;       

    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str)) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
}