#include <iostream>
#include <vector>
using namespace std;

int findLargestElement(vector<int> arr){
    int largest = arr[0];
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Largest element in the array is: " << findLargestElement(arr) << endl;
    return 0;
}