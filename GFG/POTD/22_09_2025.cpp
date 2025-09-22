class Solution {
public:
    vector<int> nse(vector<int>& arr) {
        int n = arr.size();
        vector<int> num(n, n);  
        stack<int> st;
        
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();  
            }
            if (!st.empty()) num[i] = st.top(); 
            st.push(i);
        }
        return num;
    }

    vector<int> psee(vector<int>& arr) {
        int n = arr.size();
        vector<int> num(n, -1);  
        stack<int> st;
        
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();  
            }
            if (!st.empty()) num[i] = st.top(); 
            st.push(i);
        }
        return num;
    }

    vector<int> maxOfMins(vector<int>& arr) {
        int n = arr.size();

        vector<int> prev = psee(arr);
        vector<int> next = nse(arr);
        vector<int> ans(n, 0);

        for (int i = 0; i < n; i++) {
            int len = next[i] - prev[i] - 1;   // valid window length
            ans[len - 1] = max(ans[len - 1], arr[i]); // store best value for this length
        }

        for (int i = n - 2; i >= 0; i--) {
            ans[i] = max(ans[i], ans[i + 1]);
        }

        return ans;
    }
};