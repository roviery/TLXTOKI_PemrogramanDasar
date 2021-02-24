#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    int sum = 0;
    while(cin >> x){
        if (x == EOF){
            return 0;
        }
        sum += x;
    }
    cout << sum << endl;
}