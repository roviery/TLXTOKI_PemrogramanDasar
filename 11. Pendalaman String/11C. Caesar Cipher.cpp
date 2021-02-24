#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int kode;
    getline(cin, s);
    cin >> kode;

    for (int i = 0; i<s.length(); i++){
        if (s[i] + kode > 122 ){
            s[i] = (s[i] + kode) - 26;
        }
        else {
            s[i] = s[i]+kode;
        }
    }

    cout << s << endl;
}