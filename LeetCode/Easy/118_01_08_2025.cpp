class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int ai = 1; i <= numRows; i++){
            vector<int> inner;
            int c = 1;
            for(int j = 1; j <= i; j++){
                inner.push_back(c);
                c = c * (i - j) / j;
            }
            result.push_back(inner);
        }
        return result;
        
    }
};