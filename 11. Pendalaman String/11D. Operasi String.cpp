#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1, s2, s3, s4;
    getline (cin, s1);
    getline (cin, s2);
    getline (cin, s3);
    getline (cin, s4);

    s1.erase(s1.find(s2), s2.length());
    int a = s1.find(s3);
    s1.insert(a+s3.length(), s4);
    cout << s1 << endl;
}