#include <bits/stdc++.h>
#include <cstring>
using namespace std;
void solve(string input){
    int upper = 0, lower = 0;
    for (auto i = 0; i < input.length(); i++){
        if (isupper(input[i])) upper++;
        else if (islower(input[i])) lower++;
    }
    if (lower >= upper) for(auto &c : input) c = tolower(c);
    else for(auto &c : input) c = toupper(c);
    cout << input;

}
int main(){
    string input;
    cin >> input;
    solve(input);
    return 0;
}
