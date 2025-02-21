#include <iostream>
#include <math.h>
using namespace std;

int sumofGP(int a, int r, int n){
    return a * (1 - (int)pow(r, n)) / (1 - r);     // pow() returns double, so typecasted to int
}
int main(){
    int a, n, r;
    cin >> a >> r >> n;
    cout << sumofGP(a, r, n) << endl;
    return 0;
}