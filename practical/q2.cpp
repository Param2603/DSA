// Q.2) Count frequency of each element in an array.

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 2, 3, 1, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        int count = 1;

        if(arr[i] == -1) { 
            continue;
        } // skip counted elements

        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
                arr[j] = -1; // mark as counted
            }
        }

        cout << arr[i] << " => " << count << endl;
    }
}