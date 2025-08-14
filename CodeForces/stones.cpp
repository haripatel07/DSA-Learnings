#include <bits/stdc++.h>
using namespace std;
void solve(string colors, int size){
    int count = 0;
    for(int i = 0 ; i < size - 1; i++){
        if (colors[i] == colors[i + 1]) count++;
    }
    cout << count;
}
int main(){
    int size;
    cin >> size;
    string colors;
    cin >> colors;
    solve(colors, size);
}
