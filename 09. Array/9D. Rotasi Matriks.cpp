#include <iostream>
using namespace std;

int main(){

    int x, y;
    int matriks[105][105];
    cin >> x >> y;

    for (int i = 0; i<x; i++){
        for (int j = 0; j<y; j++){
            cin >> matriks[i][j];
        }
    }

    for (int i=0; i<y; i++){
        for (int j=x-1; j>=0; j--){
            if (j==0){
                cout << matriks[j][i];
                break;
            }
            cout << matriks[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}