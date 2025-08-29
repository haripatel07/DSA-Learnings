class Solution {
  public:
    string smallestWindow(string &s, string &p) {
        if (s.empty() || p.empty()) return "";

        unordered_map<char, int> need;
        for (char c : p) need[c]++;
        int required = need.size();
    
        unordered_map<char, int> window;
        int formed = 0;
    
        int l = 0, r = 0;
        int minLen = INT_MAX;
        int startIdx = 0;
    
        while (r < s.size()) {
            char c = s[r];
            window[c]++;
    
            if (need.count(c) && window[c] == need[c]) {
                formed++;
            }
    
            while (l <= r && formed == required) {
                if ((r - l + 1) < minLen) {
                    minLen = r - l + 1;
                    startIdx = l;
                }
    
                char leftChar = s[l];
                window[leftChar]--;
                if (need.count(leftChar) && window[leftChar] < need[leftChar]) {
                    formed--;
                }
                l++;
            }
            r++;
        }
    
        return (minLen == INT_MAX) ? "" : s.substr(startIdx, minLen);
        }
};