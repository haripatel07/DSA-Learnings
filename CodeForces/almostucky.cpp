#include <bits/stdc++.h>
using namespace std;
void solve(long long num){
    int count1 = 0;
    string temp = to_string(num);
    for (int i : temp){
        if (i == '4' || i == '7'){
            count1++;
        }
    }
    if (count1 == 4 || count1 == 7) cout << "YES";
    else cout << "NO";
}
int main(){
    long long num;
    cin >> num;
    solve(num);
    return 0;
}
