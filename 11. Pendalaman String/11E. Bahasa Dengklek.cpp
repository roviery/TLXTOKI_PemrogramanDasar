#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    getline (cin, s);

    for (int i = 0; i<s.length(); i++){
        if (s[i]>96){
            s[i] -= 'a'-'A';
        }

        else if (s[i]>64){
            s[i] -= 'A' - 'a';
        }
    }

    cout << s << endl;
    return 0;
}