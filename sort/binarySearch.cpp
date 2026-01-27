#include<iostream>
using namespace std;

int main(){
    int n, key;
    int arr[100];

    cout<<"Enter number of elements:";
    cin>>n;

    cout<<"Enter elements";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter element to Search: "<<endl;
    cin>>key;

    int start = 0;
    int end = n-1;
    bool found = false;
    
    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == key){
            cout<<"Element found at position"<<mid + 1<<endl;
            found = true;
            break;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }

        else{
            start = mid + 1;
        }
    }

    if(!found){
        cout<<"Element is not found";
    }
}