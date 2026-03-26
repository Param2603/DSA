// Q.1) Find the smallest element in an array.

#include<iostream>
using namespace std;

int findSmallest(int arr[], int n) {
    int min = arr[0];  

    for (int i = 1; i <= n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int n = sizeof(arr[0]);

    cout << "Smallest element: " << findSmallest(arr, n);
}