#include <iostream>

using namespace std;

int nthtermofap(int a, int d, int n){
    return a + (n - 1) * d;
}
int main(){
    int a, n, d;
    cin >> a >> d >> n;
    cout << nthtermofap(a, n, d) << endl;   
    return 0;
}