#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int x1, y1, x2, y2, x, y;
    cin >> x1 >> y1 >> x2 >> y2;
    x = x1 - x2;
    if (x < 0){
        x = -x;
    }
    y = y1 - y2;
    if (y < 0){
        y = -y;
    }
    int manhattan;
    manhattan = x + y;

    cout << manhattan << endl;
    return 0;
}