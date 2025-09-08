class Solution {
public:
    bool checkZero(int a){
        while (a > 0){
            if (a % 10 == 0) return false;
            a /= 10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i = 1; i < n; i ++){
            int a = i;
            int b = n - i;
            if (checkZero(a) && checkZero(b)) return {a, b};
        }
        return {-1, -1};
    }
};