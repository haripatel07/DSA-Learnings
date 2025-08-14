class Solution {
public:
    vector<string> req = {"999", "888", "777", "666", "555", "444", "333", "222", "111", "000"};
    bool containsReq(string reqString, string num){
        for (int i = 0; i <= num.size() - 3; i++){
            if (num[i] == reqString[0] && num[i + 1] == reqString[1] && num[i + 2] == reqString[2]){
                return true;
            }
        }
        return false;
    }
    string largestGoodInteger(string num) {
        for (auto reqString : req){
            if (containsReq(reqString, num)) return reqString;
        }
        return "";
    }
};