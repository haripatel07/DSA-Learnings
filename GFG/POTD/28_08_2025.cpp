class Solution {
  public:
    int maxOnes(vector<int>& nums, int k) {
        int maxSize = 0;
        int maxZeroes = 0;
        int l = 0;
        for (int r = 0; r < nums.size(); r++){
            if (nums[r] == 0){
                maxZeroes ++;
            }
            while (maxZeroes > k){
                if (nums[l] == 0){
                    maxZeroes --;
                }
                l ++;
            }
            maxSize = max(maxSize, r - l + 1);
        }
        return maxSize;
        
    }
};
