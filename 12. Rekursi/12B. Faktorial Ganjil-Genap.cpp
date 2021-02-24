#include <iostream>

using namespace std;

int faktorial_GG(int a){
    if (a==1){
        return 1;}
    else if (a%2 == 0){
        return a/2*faktorial_GG(a-1);
    }

    return a*faktorial_GG(a-1);
}

int main(){
    int x;
    cin >> x;
    cout << faktorial_GG(x) << endl;
    return 0;
}