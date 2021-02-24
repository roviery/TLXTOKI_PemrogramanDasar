#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    for (int i = 0; i<s.length(); i++){
        if (s[i] == '_'){
            goto snake;
        }
        else if (s[i] >= 65 && s[i] <= 90){
            goto camel;
        }
    }

    cout << s << endl;
    return 0;

camel: 
    for (int i = 0; i<s.length(); i++){
        if (s[i] >= 65 && s[i] <= 90){
            s.insert(i,"_");
            s[i+1] += 32;
        }
    }
    cout << s << endl;
    return 0;

snake:
    for (int i = 0; i<s.length(); i++){
        if (s[i] == '_'){
            s.erase(i, 1);
            s[i] -= 32;
        }
    }
    cout << s << endl;

    return 0;
}