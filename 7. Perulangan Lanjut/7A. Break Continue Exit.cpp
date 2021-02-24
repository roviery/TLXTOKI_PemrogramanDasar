#include <iostream>

using namespace std;

int main (){

    int n;
    cin >> n;

    for (int i = 1; i<=n; i++){
        if (i%10 == 0){
            continue;
        }

        if (i==42){
            cout << "ERROR" << endl;
            break;
        }

        cout << i << endl;
    }


    return 0;
}