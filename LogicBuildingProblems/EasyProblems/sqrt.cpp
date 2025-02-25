#include <iostream>

using namespace std;

int sqrt_bs(int n){
    int res;
    int l = 1;
    int r = n;
    
    while (l <= r){
        int mid = l + (r - l) / 2;

        if (mid * mid <= n){
            res = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    cout << sqrt_bs(n);
    return 0;
}