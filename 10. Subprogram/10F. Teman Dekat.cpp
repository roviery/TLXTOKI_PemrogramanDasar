#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
#define ll long long

struct murid{
    ll x;
    ll y;
};

int main(){
    ll n,d;
    cin >> n >> d;
    murid toki[n];
    for (int i = 0; i<n; i++){
        cin >> toki[i].x >> toki[i].y;
    }

    vector <ll> kedekatan;
    
    for (int i = 0; i<n-1; i++){
        for (int j = i+1; j<n; j++){
            ll hasil;
            hasil = pow(llabs(toki[j].x-toki[i].x), d) + pow(llabs(toki[j].y-toki[i].y), d);
            kedekatan.push_back(hasil);
        }
    }

    ll min, max;
    for (int i = 0; i<kedekatan.size(); i++){
        if (i==0){
            min = kedekatan[i];
            max = kedekatan[i];
        }
        else{
            if (min > kedekatan[i]){
                min = kedekatan[i];
            }
            if (max < kedekatan[i]){
                max = kedekatan[i];
            }
        }
    }
    cout << min << " " << max << endl;
    


    return 0;
}