class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        int l = 0, r = 0;
        while (l < s1.size() && r < s2.size()){
            if (s1[l]  == s2[r]){
                l ++;
                r ++;
            }
            else{
                r ++;
            }
        }
        if (l != s1.size()) return false;
        return true;
    }
    
};