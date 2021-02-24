#include <iostream>

using namespace std;
int n, k;
int catat[20];
int pernah[20] = {false};
int y = 0;

void probability(int x, int y){
    if (x>=n || y==k){
        for (int i = 0; i<k; i++){
            int j = i;
            while (j+1<k){
                if (catat[j] > catat[j+1]){
                    return;
                }
                j++;
            }
            if (i == n-1){
                cout << catat[i];
                continue;
            }
            cout << catat[i] << " ";
        }
        cout << endl;
    }
    else{
        for (int i = 1; i<=n; i++){
            if (!pernah[i]){
                pernah[i] = true;
                catat[x] = i;
                probability(x+1, y+1);
                pernah[i] = false;
            }
        }
    }
}

int main(){
    cin >> n >> k;
    probability(0, 0);
}