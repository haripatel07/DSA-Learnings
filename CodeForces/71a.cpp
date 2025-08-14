#include<bits/stdc++.h>
using namespace std;

void solve(string word){
    int n = word.size();
    string res = "";
    if (n > 10){
        res += word[0];
        res += to_string(n - 2);
        res += word[n - 1];
        cout << res << endl;
    }
    else cout << word << endl;
}
int main(){
    int n;
    cin >> n;
    while (n --){
        string word;
        cin >> word;
        solve(word);
    }
    return 0;
}