#include <iostream>
using namespace std;


int main(){

    int n, angka[10000], modus_tertinggi, x;
    cin >> n;

    for (int i = 0; i<10000; i++){
        angka[i] = 0;
    }

    for (int i = 0; i<n; i++){
        cin >> x;

        angka[x]++;
    }

    modus_tertinggi = 0;

    for (int i = 0; i<10000; i++){
        if (angka[modus_tertinggi] <= angka[i]){
            modus_tertinggi = i;
        }
    }

    cout << modus_tertinggi << endl;

    return 0;
}