#include <iostream>
#include <math.h>
using namespace std;

bool primeChecker(int n){
    if (n <= 1) return false;

    //using sqrt(n) as any larger factor of n must be a multiple of a smaller factor that has been already checked
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    (primeChecker(n)) ? cout << "Prime" : cout << "Not Prime";
}