#include <iostream>
#include <vector>

using namespace std;
vector <int> vec;

void konversiBiner(int a){
    if (a==1){
        vec.push_back(1);
        return;
    }
    else if (a%2 == 0){
        a /= 2;
        vec.push_back(0);
        konversiBiner(a);
    }

    else if (a%2 == 1){
        a /= 2;
        vec.push_back(1);
        konversiBiner(a);
    }
}

int main(){
    int n;
    cin >> n;

    konversiBiner(n);
    for (int i = vec.size()-1; i>=0 ; i--){
        if (i == 0){
            cout << vec[i] << endl;
            break;
        }
        cout << vec[i];
    }
    return 0;
}