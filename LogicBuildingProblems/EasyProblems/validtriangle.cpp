#include <iostream>

using namespace std;

bool isTriangle(int a, int b, int c){
    if (a + b > c && b + c > a && a + c > b) return true;
    return false;
}

int main(){
    int a, b, c;
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    if (isTriangle(a, b, c)) cout << "Valid Triangle" << endl;
    else cout << "Invalid Triangle" << endl;
    return 0;
}