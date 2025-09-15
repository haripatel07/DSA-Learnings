class Solution {
public:
    bool stringStack(string pat, string tar) {
        int i = (int)pat.size() - 1;
        int j = (int)tar.size() - 1;
        int skip = 0;

        while (i >= 0 && j >= 0) {
            if (skip > 0) {
                skip--;
                i--;
            } else if (pat[i] == tar[j]) {
                i--;
                j--;
            } else {
                skip++;
                i--;
            }
        }

        return j < 0;
    }
};
