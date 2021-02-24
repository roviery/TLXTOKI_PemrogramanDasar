#include <iostream>
using namespace std;

int main(){
    
    int n, terbesar, terkecil, angka;


    cin >> n;

    for (int i = n; i>=1; i--){
        cin >> angka;
        if (i == n){
            terbesar = angka;
            terkecil = angka;
        }

        if (terbesar < angka){
            terbesar = angka;
        }
        
        if (terkecil > angka){
            terkecil = angka;
        }
    }

    cout << terbesar << " " << terkecil << endl;

    return 0;
}