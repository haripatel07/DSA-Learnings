#include <bits/stdc++.h>
using namespace std;

void solve(string s){
    set<char> store;
    for (char c : s){
        store.insert(c);
    }
    if (store.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
}

int main(){
    string s;
    cin >> s;
    solve(s);
    return 0;
}