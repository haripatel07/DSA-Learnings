#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a){
    set<int> s;
    for(int i = 0; i < 4; i++){
        s.insert(a[i]);
    }
    cout << 4 - s.size();
}
int main(){
    vector<int> a(4);
    for(int i = 0; i < 4; i++){
        cin >> a[i];
    }
    solve(a);
    return 0;
}