class Solution {
public:
    vector<int> nextGreater(vector<int> &arr) {
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st; 
        for (int i = 0; i < 2 * n; i++) {
            int idx = i % n;
            st.top();
            while (!st.empty() && arr[idx] > arr[st.top()]) {
                ans[st.top()] = arr[idx];
                st.pop();
            }
            
            if (i < n) {
                st.push(idx);
            }
        }
        
        return ans;
    }
};
