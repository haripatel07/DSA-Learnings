class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int start = 0;
        int maxLen = 0;
        int n = fruits.size();
        unordered_map<int, int> basket;
        
        for (int end = 0; end < n; end++){
            basket[fruits[end]]++;

            while (basket.size() > 2){
                basket[fruits[start]] --;
                if (basket[fruits[start]] == 0) basket.erase(fruits[start]);
                start ++;
            }

            maxLen = max(maxLen, end - start + 1);
        }
        return maxLen;
    }
};