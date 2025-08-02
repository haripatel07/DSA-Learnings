#include <iostream>
#include <math.h>
using namespace std;

bool checkPower(int x, int y){
    if (x == 1) return y == 1;

    while (y % x == 0){
        y /= x;
    }

    return y == 1;

}
int main(){
    int x, y;
    cin >> x >> y;

    (checkPower(x, y)) ? cout << "Yes" : cout << "No";
    return 0;
}