#include <iostream>
using namespace std;

void swap_variable(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void optimized_method(int *c, int *d){
    *c = *c + *d;
    *d = *c - *d;
    *c = *c - *d;
}

int main(){
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "Before swapping: " << endl;
    cout << "a = " << a << ",b = " << b << endl;
    swap_variable(&a, &b);
    cout << "After swapping: " << endl;
    cout << "a = " << a << ",b = " << b << endl;

    int c, d;
    cout << "Enter the first number: ";
    cin >> c;
    cout << "Enter the second number: ";
    cin >> d;

    cout << "Before swapping: " << endl;
    cout << "c = " << c << ",d = " << d << endl;
    optimized_method(&c, &d);
    cout << "After swapping: " << endl;
    cout << "c = " << c << ",d = " << d << endl;


    return 0;
}