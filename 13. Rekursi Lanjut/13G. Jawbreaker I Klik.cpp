#include <iostream>

using namespace std;

bool visited[25][25] = {false};
int map[25][25];
int count = 0;
int m, n, b, k;

void play(int x, int y, int value){
    if (x>=0 && x<m && y>=0 && y<n){
        if (!visited[x][y]){
            visited[x][y] = true;
            if (map[x][y] == value){
                count++;
                play(x+1,y,value);
                play(x-1,y,value);
                play(x,y+1,value);
                play(x,y-1,value);
            }
        }
    }
}

int main(){
    cin >> m >> n;
    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            cin >> map[i][j];
        }
    }
    cin >> b >> k;
    int warna = map[b][k];
    play(b, k, warna);
    int hasil = count*(count-1);
    cout << hasil << endl;
}