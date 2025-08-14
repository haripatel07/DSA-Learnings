#include <bits/stdc++.h>
#include <set>
using namespace std;
void solve(int input){
    while (1){
        input++;
        string temp = to_string(input);
        set <char> set (begin(temp), end(temp));
        if (set.size() == 4){
            cout << input;
            break;
        }
    }

}
int main(){
    int input;
    cin >> input;
    solve(input);
    return 0;
}
