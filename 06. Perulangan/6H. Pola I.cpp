#include <iostream>

using namespace std;

int main(){

    int m,n;

    cin >> m >> n;

    for (int i = 1; i<=m; i++){
        if (i%n == 0){
            if (i==m){
                cout << "*" << endl;
                return 0;
            }
            cout << "* ";
        }

        if (i%n != 0){
            if (i==m){
                cout << i << endl;
                return 0;
            }
            cout << i << " ";
        }
    }

    return 0;
}