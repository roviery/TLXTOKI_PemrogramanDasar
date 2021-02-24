// PALINDROME

#include <iostream>
#include <string>

using namespace std;

//KODOK
void palindrome(string kata, int awal, int akhir){
    if (kata.length() == 1){
        cout << "YA" << endl;
    }
    
    else if (awal>=akhir){
        cout << "YA" << endl;
    }
    
    else if (kata[awal] != kata[akhir]){
        cout << "BUKAN" << endl;
    }

    else{
    palindrome(kata, awal+1, akhir-1);
    }

}

int main(){
    string s;
    getline(cin, s);
    palindrome(s, 0, s.length()-1);

}