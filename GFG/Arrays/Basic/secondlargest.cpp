#include <iostream>
#include <vector>

using namespace std;

int findSecondLargest(vector<int> arr){
    int largest = arr[0];
    int secondLargest = -1;

    for (int i : arr){
        if (i > largest){
            secondLargest = largest;
            largest = i;
        }
        else if (i < largest && i > secondLargest){
            secondLargest = i;
        }
    }
    return secondLargest;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Second largest element in the array is: " << findSecondLargest(arr) << endl;
    return 0;
}