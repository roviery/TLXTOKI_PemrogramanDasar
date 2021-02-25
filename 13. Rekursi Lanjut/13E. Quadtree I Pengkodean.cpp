#include <bits/stdc++.h>

using namespace std;
int tree[128][128];
int indexCode;
string kode[16384];

bool homogen(int r, int c, int size){
    for (int i = r; i < (r + size); i++){
        for (int j = c; j < (c + size); j++){
            if (tree[r][c] != tree[i][j])
                return false;
        }
    }
    return true;
}

bool check(int n){
    if (n == 2 || n == 4 || n == 8 || n == 16 || n == 32 || n == 64 || n == 128)
        return true;
    else
        return false;
}

void solve(int r, int c, int size, string s){
    if (homogen(r, c, size)){
        if (tree[r][c]){
            kode[indexCode] = "1" + s;
            indexCode++;
        }
    }
    else{
        solve(r, c, (size >> 1), s + "0");
        solve(r, c + (size >> 1), (size >> 1), s + "1");
        solve(r + (size >> 1), c, (size >> 1), s + "2");
        solve(r + (size >> 1), c + (size >> 1), (size >> 1), s + "3");
    }
}

int main(){
    indexCode = 0;
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> tree[i][j];
        }
    }
    int rtemp = r, ctemp = c;
    if (!(check(r) && check(c))){
        while (!check(rtemp))
            rtemp++;
        while (!check(ctemp))
            ctemp++;
    }
    for (int i = r; i < rtemp; i++){
        for (int j = c; j < ctemp; j++){
            tree[i][j] = 0;
        }
    }
    
    if (rtemp > ctemp){
        r = rtemp;
    }
    else{
        r = ctemp;
    }
    c = r;
    string s;
    solve(0, 0, r, s);
    cout << indexCode << endl;
    for (int i = 0; i < indexCode; i++)
        cout << kode[i] << endl;
    return 0;
}