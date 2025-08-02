#include <iostream>
#include <math.h>
using namespace std;

int nthGpTerm(int a, int r, int n){
    return a * (int)pow(r, n - 1);     // pow() returns double, so typecasted to int
}
int main(){
    int a, n, r;
    cin >> a >> r >> n;
    cout << nthGpTerm(a, r, n) << endl;
}