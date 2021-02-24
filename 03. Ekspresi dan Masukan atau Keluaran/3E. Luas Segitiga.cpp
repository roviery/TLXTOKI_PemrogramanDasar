#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a, t, l;
    cin >> a >> t;
    l = a * t / 2;
    cout << fixed;
    cout << setprecision(2) << l << endl;
    return 0;
}