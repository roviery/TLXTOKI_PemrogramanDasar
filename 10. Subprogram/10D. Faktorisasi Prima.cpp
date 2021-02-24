#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int currentFactor = 2;
    while (currentFactor<n){
        if (n % currentFactor == 0){
            int expo = 0;
            while (n % currentFactor == 0){
                expo++;
                n /= currentFactor;
            }

            if (expo!=1){
                printf("%d^%d", currentFactor, expo);
            }
            else{
                printf("%d", currentFactor);
            }
            if (n!=1){
                printf(" x ");
            }
        }
        currentFactor++;
    }

    if (n!=1){
        printf("%d", currentFactor);
    }
    printf("\n");
    return 0;
}