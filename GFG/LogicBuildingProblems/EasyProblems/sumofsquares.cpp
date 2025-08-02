#include <iostream>
using namespace std;

int sumofsquares(int n){
    return (n * (n + 1) / 2) * (2 * n + 1) / 3;
}

int main(){
    int n;
    cin >> n;
    cout << sumofsquares(n) << endl;
    return 0;
}