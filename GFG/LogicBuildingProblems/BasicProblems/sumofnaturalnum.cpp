#include <iostream>

using namespace std;

int loop_sum(int n){                    //O(n)
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int recursive_sum(int n){
    if (n == 1){
        return 1;
    }
    return n + recursive_sum(n-1);
}

int formula_sum(int n){   // for long long numbers use long long instead of int
    return n * (n + 1) / 2;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The sum of first " << n << " natural numbers is: " << endl;
    cout << "Iterative method: " << loop_sum(n) << endl;
    cout << "recursive method: " << recursive_sum(n) << endl; //O(n)
    cout << "formula method: " << formula_sum(n) << endl; //O(1)
    return 0;
}