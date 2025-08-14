#include <bits/stdc++.h>
using namespace std;
void solve(char arr[], int size, int time){
    while (time--){
        int i = 0;
        while (i < size - 1){
            if (arr[i] == 'B' && arr[i + 1] == 'G'){
                swap(arr[i], arr[i + 1]);
                i = i + 2;
            }
            else i++;
        }
    }
    for(int i = 0; i < size; i++){
        cout << arr[i];
    }
}
int main(){
    int size, time;
    cin >> size;
    cin >> time;
    char arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    solve(arr, size, time);
    return 0;
}
