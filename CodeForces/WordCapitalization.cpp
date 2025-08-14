#include <bits/stdc++.h>
using namespace std;
void solve(string& word){
    if (word[0] >= 'a' && word[0] <= 'z'){
        word[0] = word[0] - 32;
    }
    cout << word;
}
int main(){
    string word;
    cin >> word;
    solve(word);
    return 0;
}
