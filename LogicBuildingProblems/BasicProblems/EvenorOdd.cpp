#include <iostream>

using namespace std;

bool isEven_remainder(int num){
    return num % 2 == 0;
}

bool isEven_bitwise_and(int num){
    return (num & 1) == 0;
}

bool isEven_bitwise_shift(int num){
    return (num == (num >> 1) << 1);
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    (isEven_bitwise_shift(num)) ? cout << "Even" : cout << "Odd";
    return 0; 
}