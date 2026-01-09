#include<iostream>
using namespace std;


int main(){
   
    int arr[5] = {10,20,30,40,50};
     int n;

     cout<<"Enter array size - ";
     cin>>n;

     for(int i=0; i<=n; i++){
     cout<<"Enter element on ["<<i<<"] index - ";
     cin>>arr[i];
     }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }
}