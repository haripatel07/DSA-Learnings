#include <iostream>

using namespace std;

void iterative_method(int n){
    for(int i = 1; i <= 10; i++){
        cout << n << " * " << i << " = " << n * i << endl;
    }
}

void recursive_method(int n, int i = 1){
    if (i == 11) return;
    cout << n << " * " << i << " = " << n * i << endl;
    i++;
    recursive_method(n, i);
}
int main(){
    int n;
    cout << "Enter the number ";
    cin >> n; 
    cout << "Multiplication table of " << n << " is: " << endl;
    cout << "Iterative method: " << endl;
    iterative_method(n);
    cout << "Recursive method:" << endl;
    recursive_method(n);
    return 0;
}