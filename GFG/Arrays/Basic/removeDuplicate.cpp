#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &arr){
    int n = arr.size();
    int idx = 1;
    for (int i = 1; i < n; i++){
        if (arr[i - 1] != arr[i]){
            arr[idx] = arr[i];
            idx++;
        }
    }
    return idx;
}

int main(){
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    int n = removeDuplicates(arr);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;

}
