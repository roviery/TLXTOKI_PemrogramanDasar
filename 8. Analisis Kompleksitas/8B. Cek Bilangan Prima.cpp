#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n, x;
    bool prime;

    cin >> n;

    for (int i = 0; i<n; i++){
        cin >> x;


        prime = true;
        if (x<2){
            prime = false;
            
        }

        for (int j=2; j<=trunc(sqrt(x)); j++){
            if (x%j == 0){
                prime = false;
                break;
            }
        }

        if (prime == true){
            cout << "YA" << endl;
        }
        else { cout << "BUKAN" << endl; }


    }
    return 0;
}