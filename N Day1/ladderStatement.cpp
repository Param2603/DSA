// if, else if, else

#include<iostream>
using namespace std;

// int main(){
//     int btr;

//     cout<<"Enter battery percentage :"<<endl;
//     cin>>btr;

//     if(btr <= 20){
//         cout<<"Connect to the charger"<<endl;
//     }
//     else if (btr >= 20 && btr <= 99){
//         cout<<"Your phone is charging"<<endl;
//     }
//     else{
//         cout<<"disconnect to the charger"<<endl;
//     }
// }

int main() {
    string light;

    cout << "Signal rule (red/yellow/green): ";
    cin >> light;

    if (light == "red") {
        cout << "Stop" << endl;
    }
    else if (light == "yellow") {
        cout << "Wait" << endl;
    }
    else if (light == "green") {
        cout << "Go" << endl;
    }
    else {
        cout << "Invalid light" << endl;
    }
}