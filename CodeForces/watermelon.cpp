#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    if (n % 2 == 0 && n > 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main(){
    int n;
    cin >> n;
    solve(n);
}