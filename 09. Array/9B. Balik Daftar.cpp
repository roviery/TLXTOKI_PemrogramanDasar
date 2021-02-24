#include <iostream>
using namespace std;

int main(){

    int angka[10000], i;

    i = 0;
    while(cin >> angka[i]){
        i++;
    }

    for (int j = i-1; j>=0; j--){
        cout << angka[j] << endl;
    }
    return 0;
}