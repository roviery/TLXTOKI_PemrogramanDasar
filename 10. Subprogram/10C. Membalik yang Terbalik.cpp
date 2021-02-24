#include <iostream>

using namespace std;

int reverse(int x){
    int temp = x;
    int ret = 0;

    while(temp > 0){
        ret = (ret*10) + (temp%10);
        temp = temp/10;
    }
    return ret;
}

int main(){

    int a, b, c;

    cin >> a >> b;

    c = reverse(a) + reverse(b);

    cout << reverse(c) << endl;

    return 0;
}