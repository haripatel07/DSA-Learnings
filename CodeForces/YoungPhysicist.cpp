#include <bits/stdc++.h>
using namespace std;
void solve(int arr[][3], int n){
    int x_sum = 0;
    int y_sum = 0;
    int z_sum = 0;
    for (int i = 0; i < n; i++){
        x_sum += arr[i][0];
        y_sum += arr[i][1];
        z_sum += arr[i][2];
    }
    if (x_sum == 0 && y_sum == 0 && z_sum == 0) cout << "YES";
    else cout << "NO";

}
int main(){
    int n;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }
    solve(arr, n);
    return 0;
}