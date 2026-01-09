#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number: "<<endl;
    cin>>n;

    if(n<=1){
        cout<<n<<" is not prime";
    }
    else {
        bool prime = true;

        for(int i = 2; i < n; i++){
            if(n % i == 0){
                prime = false;
                break;
            }
        }

        if(prime == true){
            cout<<n<<" is prime";
        }
        else{
            cout<<n<<" is not prime";
        }
    }
}
