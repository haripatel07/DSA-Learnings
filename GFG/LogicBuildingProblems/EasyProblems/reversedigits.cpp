#include <iostream>

using namespace std;

int reverseDigits(int n){
    int reverse = 0;
    while (n > 0){
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    return reverse;
}
int main() {
    int n;
    cin >> n;

    cout << reverseDigits(n) << endl;
}