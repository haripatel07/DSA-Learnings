#include <iostream>
#include <vector>

using namespace std;

vector<int> getAlternates(vector<int> &arr) {
    vector<int> res;
    for (int i = 0; i < arr.size(); i +=2){
        res.push_back(arr[i]);
    }
    return res;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> res = getAlternates(arr);
    for (int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    return 0;
}