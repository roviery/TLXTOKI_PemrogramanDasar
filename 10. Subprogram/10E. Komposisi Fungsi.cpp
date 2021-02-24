#include <iostream>
#include <math.h>

using namespace std;
#define ll long long
ll hasil = 0;

int dengklek(ll a, ll b, ll k, ll x){
    if (k == 0){
        return hasil;
    }
    hasil = abs(a*x + b);
    return dengklek(a,b,k-1,hasil);
}
int main(){
    ll A, B, K, x;
    cin >> A >> B >> K >> x;
    cout << dengklek(A,B,K,x) << endl;

    return 0;
}