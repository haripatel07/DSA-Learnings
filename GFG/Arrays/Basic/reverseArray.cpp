#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &arr){
    int n = arr.size();
    for (int i = 0; i < n / 2; i++){
        swap(arr[i], arr[n - i - 1]);
    }
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    reverseArray(arr);
    for (int x : arr){
        cout << x << " ";
    }
    return 0;
}