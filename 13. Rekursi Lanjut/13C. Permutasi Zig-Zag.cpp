#include <iostream>
#include <string>

using namespace std;

int n;
int catat[20];
bool pernah[20];
bool conclusion = false;

void tulis(int kedalaman){
    if (kedalaman >= n){
        for (int i = 0; i < n; i++){
            int j = i;
            if (j + 2 < n){
                if (catat[i + 1] > catat[i] && catat[i + 1] < catat[i + 2]){
                    return;
                }
                else if (catat[i + 1] < catat[i] && catat[i + 1] > catat[i + 2]){
                    return;
                }
            }
            if (i == n - 1){
                conclusion = true;
            }
        }
        if (conclusion == true){
            for (int i = 0; i < n; i++){
                cout << catat[i];
            }
            cout << endl;
        }
    }
    else{
        // Masuk ke lapisan lebih dalam
        for (int i = 1; i <= n; i++){
            if (!pernah[i]){
                pernah[i] = true;
                catat[kedalaman] = i; // Catat di sini
                tulis(kedalaman + 1);
                pernah[i] = false;
            }
        }
    }
}

void tulis2(int kedalaman){
    if (kedalaman >= n){
        for (int i = 0; i < n; i++){
            cout << catat[i];
        }
        cout << endl;
    }

    else{
        for (int i = 1; i <= n; i++){
            if (!pernah[i])
                pernah[i] = true;
            catat[kedalaman] = i;
            tulis(kedalaman + 1);
            pernah[i] = false;
        }
    }
}
int main(){
    cin >> n;
    if (n < 3){
        tulis2(0);
        return 0;
    }
    tulis(0);
    return 0;
}