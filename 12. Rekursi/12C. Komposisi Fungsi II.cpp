#include <iostream>

using namespace std;

int komp(int a, int b, int k, int x){
    int sum;

    if (k == 1){
        sum = a*x+b;
        if (sum < 0){
            sum *= -1;
            return sum;
        }
        return sum;
    }

    sum = a*x+b;
    if (sum < 0){
        sum *= -1;
    }

    return komp(a,b,k-1,sum);
}

int main(){
    int a,b,k,x;
    cin >> a >> b >> k >> x;
    cout << komp(a,b,k,x) << endl;

}