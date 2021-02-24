#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;

    if (n == 0){
        cout << "bukan" << endl;
        return 0;
    }

    while (n>= 1){
        if (n%2 != 0){
            if (n==1){
                cout << "ya" << endl;
                break;
            }
            cout << "bukan" << endl;
            return 0;
        }
        n = n/2;
    }


    return 0;
}