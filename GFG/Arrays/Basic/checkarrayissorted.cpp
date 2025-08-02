#include <iostream>
#include <vector>

using namespace std;

bool checkSorted(vector<int> arr){
    int n = arr.size();
    for (int i = 1; i < n; i++){
        if (arr[i - 1] > arr[i]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << checkSorted(arr) << endl;
    return 0;
}