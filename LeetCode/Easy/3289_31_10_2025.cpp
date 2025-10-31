class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> res;
        set<int> store;
        for (int i : nums){
            if (res.size() == 2) return res;
            if (store.find(i) != store.end()) res.push_back(i);
            else store.insert(i);
        }
        return res;
    }
};