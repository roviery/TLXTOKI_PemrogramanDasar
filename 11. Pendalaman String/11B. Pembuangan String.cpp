#include <iostream>
#include <string>

using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    while (s.find(t) != -1){
        int found = s.find(t);
        s.erase(found, t.length());
    }
    cout << s << endl;
}