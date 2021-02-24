#include <iostream>

using namespace std;

int main (){

    int pola;
    cin >> pola;

    for (int i = 0; i<pola; i++){
        
        for (int j = i+1; j<pola; j++){
            cout << " ";
        }

        for (int k = i; k>=0; k--){
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}