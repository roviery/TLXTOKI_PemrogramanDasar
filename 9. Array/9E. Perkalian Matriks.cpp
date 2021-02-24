#include <iostream>
using namespace std;

int main(){

    int n,m,p, matriks1[105][105], matriks2[105][105], matriks3[105][105];

    cin >> n >> m >> p;

    for(int i=0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin >> matriks1[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for (int j = 0; j<p;j++){
            cin >> matriks2[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for (int j=0; j<p; j++){
            matriks3[i][j] = 0;
            for (int k=0; k<m; k++){
                matriks3[i][j] += matriks1[i][k]*matriks2[k][j];
            }     
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            if (j == p-1){
                cout << matriks3[i][j];
                continue;
            }
            cout << matriks3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}