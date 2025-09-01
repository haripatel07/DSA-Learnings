class Solution {
  public:
    int sumOfModes(vector<int>& arr, int k) {
        int n = arr.size();
        long long sum = 0;

        unordered_map<int,int> freq;     
        map<int,set<int>> group;        

        auto add = [&](int x) {
            int oldFreq = freq[x];
            int newFreq = oldFreq + 1;
            freq[x] = newFreq;

            if (oldFreq > 0) {
                group[oldFreq].erase(x);
                if (group[oldFreq].empty()) group.erase(oldFreq);
            }
            group[newFreq].insert(x);
        };

        auto remove = [&](int x) {
            int oldFreq = freq[x];
            int newFreq = oldFreq - 1;
            freq[x] = newFreq;

            group[oldFreq].erase(x);
            if (group[oldFreq].empty()) group.erase(oldFreq);

            if (newFreq > 0) group[newFreq].insert(x);
        };

        // Build first window
        for (int i = 0; i < k; i++) add(arr[i]);

        // Slide window across arr
        for (int i = k; i <= n; i++) {
            auto [maxFreq, elems] = *group.rbegin(); 
            sum += *elems.begin(); 

            if (i < n) {
                remove(arr[i-k]); 
                add(arr[i]);      
            }
        }

        return (int)sum;
    }
};
