#include <iostream>

using namespace std;

void gunung(int a){
    if (a==1){
        cout << "*" << endl;
    }
    else if (a>1){
        gunung(a-1);
        for (int i = 1; i<=a; i++){
            cout << "*";
        }
        cout << endl;
        gunung(a-1);
    }
}

int main(){
    int x;
    cin >> x;
    gunung(x);
}