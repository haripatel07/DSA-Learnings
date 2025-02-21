#include <iostream>

using namespace std;

int closestNumber(int n, int m) {
    int i = n / m;
    int c1 = m * i;
    int c2 = (n * m) > 0 ? (m * (i + 1)) : (m * (i - 1));
    if (abs(n - c1) < abs(n - c2)) return c1;
    return c2;
    
}

int main(){
    int n, m;
    cin >> n >> m;
    int ans = closestNumber(n, m);
    cout << ans << endl;
    return 0;
}