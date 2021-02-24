#include <iostream>
#include <ctype.h>

using namespace std;

void tukar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int bola, pertukaran, x, y, a, b;
    char P, Q;
    cin >> bola;
    int baris1[bola], baris2[bola];

//================================================================================//
    // INPUT

    for (int i = 0; i<bola; i++){
        cin >> baris1[i];
    }

    for (int i = 0; i<bola; i++){
        cin >> baris2[i];
    }

    cin >> pertukaran;

    for (int i = 1; i<=pertukaran; i++){
        cin >> P >> x >> Q >> y;
    
    

//================================================================================//
        // LOGIC
        if (toupper(P) == 'A' && toupper(Q) == 'A'){
            a = baris1[x-1];
            b = baris1[y-1];
        }

        if (toupper(P) == 'B' && toupper(Q) == 'B'){
            a = baris2[x-1];
            b = baris2[y-1];
        }

        if (toupper(P) == 'A' && toupper(Q) == 'B'){
            a = baris1[x-1];
            b = baris2[y-1];
        }

        if (toupper(P) == 'B' && toupper(Q) == 'A'){
            a = baris2[x-1];
            b = baris1[y-1];
        }
        
        tukar(a, b);

        if (toupper(P) == 'A' && toupper(Q) == 'A'){
            baris1[x-1] = a;
            baris1[y-1] = b;
        }

        if (toupper(P) == 'B' && toupper(Q) == 'B'){
            baris2[x-1] = a;
            baris2[y-1] = b;
        }

        if (toupper(P) == 'B' && toupper(Q) == 'A'){
            baris2[x-1] = a;
            baris1[y-1] = b;
        }

        if (toupper(P) == 'A' && toupper(Q) == 'B'){
            baris1[x-1] = a;
            baris2[y-1] = b;
        }
    }
//================================================================================//
    // OUTPUT 
    for (int i = 0; i<bola; i++){
        if(i==bola-1){
            cout << baris1[i] << endl;
            break;
        }
        cout << baris1[i] << " ";
    }

    for (int i = 0; i < bola; i++){
        if (i == bola - 1){
            cout << baris2[i] << endl;
            break;
        }
        cout << baris2[i] << " ";
    }
    return 0;
}