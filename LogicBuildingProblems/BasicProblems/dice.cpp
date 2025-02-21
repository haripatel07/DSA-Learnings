#include <iostream>

using namespace std;

int dice_optimized(int n){
    return 7 - n;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The opposite face of the dice is: " << dice_optimized(n) << endl;

    return 0;
}