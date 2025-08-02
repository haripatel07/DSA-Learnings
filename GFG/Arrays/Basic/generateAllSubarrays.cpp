#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generateAllSubarrays(vector<int> &arr){
    vector<vector<int>> res;
    int n = arr.size();
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            vector<int> inner;
            for (int k = i; k <= j; k++){
                inner.push_back(arr[k]);
            }
            res.push_back(inner);
        }
    }
    return res;
}

int main(){
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> res = generateAllSubarrays(arr);
    for (auto v : res){
        for (int x : v){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}