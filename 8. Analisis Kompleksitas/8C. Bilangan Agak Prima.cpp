#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n, x, count;
    bool prime;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x;

        if (x < 2){
            prime = false;
        }


        prime = true;
        count = 2;
        for (int j = 2; j <= trunc((x)/2); j++){
            if (x % j == 0){
                count++;
                if (count > 4){
                    prime = false;
                    break;
                }
            }
        }

        if (prime == true){
            cout << "YA" << endl;
        }
        else{
            cout << "BUKAN" << endl;
        }
        count = 2;
    }
    return 0;
}