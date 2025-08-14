#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> score, int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++){
        if (score[i] > 0 && score[i] >= score[k - 1]) count ++;
    }
    cout << count << endl;
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> score(n);
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }
    solve(score, n, k);
    return 0;
}