#include <bits/stdc++.h>

using namespace std;
int tree[128][128];
string code[16348]; // -> 128*128 = 16348

bool isPowerTwo(int n){
    if (n == 2 | n == 4 | n == 8 | n == 16 | n == 32 | n == 64 | n == 128)
        return true;
    else{
        return false;
    }
}

void solve(int r, int c, int size, string s){
    if (s.length() == 0){
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++)
                tree[i][j] = 1;
        }
        return;
    }
    if (s.length() == 1){
        if (s == "0"){
            for (int i = r; i < (r + (size >> 1)); i++){
                for (int j = c; j < (c + (size >> 1)); j++)
                    tree[i][j] = 1;
            }
        }
        else if (s == "1"){
            for (int i = r; i < (r + (size >> 1)); i++){
                for (int j = c + (size >> 1); j < (c + size); j++)
                    tree[i][j] = 1;
            }
        }
        else if (s == "2"){
            for (int i = r + (size >> 1); i < (r + size); i++){
                for (int j = c; j < (c + (size >> 1)); j++)
                    tree[i][j] = 1;
            }
        }
        else{
            for (int i = r + (size >> 1); i < (r + size); i++){
                for (int j = c + (size >> 1); j < (c + size); j++)
                    tree[i][j] = 1;
            }
        }
    }
    else{
        char pos = s[0];
        s.erase(s.begin());
        if (pos == '0')
            solve(r, c, (size >> 1), s);
        else if (pos == '1')
            solve(r, c + (size >> 1), (size >> 1), s);
        else if (pos == '2')
            solve(r + (size >> 1), c, (size >> 1), s);
        else
            solve(r + (size >> 1), c + (size >> 1), (size >> 1), s);
    }
}

int main(){
    int n, r, c;
    cin >> n;
    cin.get();
    for (int i = 0; i<n; i++){
        getline(cin, code[i]);
    }

    cin >> r >> c;
    int rtemp = r;
    int ctemp = c;
    if (!(isPowerTwo(r) && isPowerTwo(c))){
        while(!isPowerTwo(rtemp)) rtemp++;
        while(!isPowerTwo(ctemp)) ctemp++;
    }

    if (rtemp > ctemp){
        ctemp = rtemp;
    }
    else if (rtemp < ctemp){
        rtemp = ctemp;
    }
    ctemp = rtemp;


    for (int i = 0; i<rtemp; i++){
        for (int j = 0; j<ctemp; j++){
            tree[i][j] = 0;
        }
    }

    if (n != 0){
        for (int i = 0; i<n; i++){
            code[i].erase(code[i].begin());
            solve(0, 0, rtemp, code[i]);
        }
    }
    if (n == 0){
        for (int i = 0; i<r; i++){
            for (int j = 0; j<c; j++){
                if (j == c-1){
                    cout << tree[i][j] << endl;
                    continue;
                }
                cout << tree[i][j] << " ";
            }
        }
        return 0;
    }

    for (int i = 0; i<r; i++){
        for (int j = 0; j<c; j++){
            if (j == c-1){
                cout << tree[i][j] << endl;
                continue;
            }
            cout << tree[i][j] << " ";
        }
    }

    return 0;
}