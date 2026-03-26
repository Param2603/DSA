// Q.4) Find the largest word in a sentence.

#include<iostream>
using namespace std;

int main(){
    string str = "My name is Param Shah";
    string word = "", largest = "";

    for (int i = 0; i < str.length(); i++){ 
        if (str[i] != ' '){ 
            word += str[i]; 
        } else{ 
            if (word.length() > largest.length()){ 
                largest = word; 
            } 
            word = ""; 
        } 
    } 

    // Check last word
    if (word.length() > largest.length()){
        largest = word;
    }
    
    cout << "Largest word: " << largest;
}