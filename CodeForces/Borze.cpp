#include <bits/stdc++.h>
using namespace std;
void solve(string input){
    int i = 0;
    while (i < input.length()){
        if (input[i] == '.'){
            cout << 0;
            i++;
        }
        else if (input[i] == '-' && input[i + 1] == '.'){
            cout << 1;
            i = i + 2;
        }
        else if (input[i] == '-' && input[i + 1] == '-'){
            cout << 2;
            i = i + 2;
        }
    }

}
int main(){
    string input;
    cin >> input;
    solve(input);
    return 0;
}
