#include <iostream>
using namespace std;

int main(){

    int pola, add, angka;

    cin >> pola;

    add = 1;
    angka = 0;
    for (int i = 0; i<pola; i++){

        for (int j = 0; j<=i; j++){
            cout << angka;
            angka++;

            if (angka == 10){
                angka = 0;
            }

        }
        cout << endl;
    }
    return 0;
}