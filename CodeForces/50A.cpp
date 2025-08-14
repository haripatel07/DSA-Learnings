#include <bits/stdc++.h>
using namespace std;

void solve(int m, int n) {
    int a = 2, b = 1;
    int ans = (m - a) * n;
    ans += n - a;
    cout << ans;
    
}
int main(){
    int m, n;
    cin >> m >> n;
    solve(m, n);
    return 0;
}