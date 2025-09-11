class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return 0;         
        if (arr[0] == 0) return -1;   

        int jumps = 0, curEnd = 0, curFarthest = 0;

        for (int i = 0; i < n - 1; i++) {
            curFarthest = max(curFarthest, i + arr[i]);
            if (i == curEnd) {
                jumps++;
                curEnd = curFarthest;

                if (curEnd >= n - 1) return jumps;
            }
        }
        return -1; 
    }
};
