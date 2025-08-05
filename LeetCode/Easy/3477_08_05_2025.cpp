class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = baskets.size();
        int count = 0;
        for (auto fruit : fruits){
            int offset = 1;
            for (int i = 0; i < n; i++){
                if (fruit <= baskets[i]){
                    baskets[i] = 0;
                    offset = 0;
                    break;
                }
            }
            count += offset;
        }
        return count;
    }
};