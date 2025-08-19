class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long subTotal = 0, total = 0;
        for (int num : nums){
            if (num == 0){
                subTotal ++;
                total += subTotal;
            }
            else{
                subTotal = 0;
            }
        }
        return total;
    }
};