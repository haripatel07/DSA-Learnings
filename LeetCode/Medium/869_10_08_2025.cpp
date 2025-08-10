class Solution {
public:
    vector<int> freq(int n){
        vector<int> table(10, 0);
        while (n > 0){a
            table[n % 10]++;
            n /= 10;
        }
        return table;
    }
    bool equalFreq(vector<int> x, vector<int> y){
        for (int i = 0; i < 10; i++){
            if (x[i] != y[i]) return false;
        }
        return true;
    }
    bool reorderedPowerOf2(int n) {
        vector<int> freqTable = freq(n);
        for(int i = 0; i <= 30; i++){
            int res = (int)pow(2, i);
            if (equalFreq(freqTable, freq(res))) return true;
        }
        return false;
    }
};