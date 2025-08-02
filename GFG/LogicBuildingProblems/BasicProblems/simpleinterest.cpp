#include <iostream>

using namespace std;

int simpleInterest(int p, int r, int t){
    return (p * r * t) / 100;
}

int main(){
    int p, r, t;
    cin >> p >> r >> t;
    cout << simpleInterest(p, r, t) << endl;
    return 0;
}