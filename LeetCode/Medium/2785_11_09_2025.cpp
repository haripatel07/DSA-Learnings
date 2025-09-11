class Solution {
public:
    string sortVowels(string s) {
        set<char> store = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        vector<char> vowels;
        for (char c : s){
            if (store.count(c)) vowels.push_back(c);
        }
        sort(vowels.begin(), vowels.end());
        int i = 0;
        for (int j = 0; j < s.size(); j++){
            if (store.count(s[j])){
                s[j] = vowels[i];
                i ++;
            }
        }
        return s;
    }
};