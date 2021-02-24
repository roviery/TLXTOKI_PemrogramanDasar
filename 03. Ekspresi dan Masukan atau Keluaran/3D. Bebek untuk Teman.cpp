#include <iostream>

using namespace std;

int main(){
    int n, m, a, b;
    cin >> n >> m;
    a = n / m;
    b = n % m;
    cout << "masing-masing " << a << endl;
    cout << "bersisa " << b << endl;
    return 0;
}