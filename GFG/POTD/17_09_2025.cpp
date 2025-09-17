class Solution {
  public:
    string decodedString(string &s) {
        stack<int> countStack;
        stack<string> stringStack;
        string currentString = "";
        int k = 0;

        for (char c : s) {
            if (isdigit(c)) {
                k = k * 10 + (c - '0');
            }
            else if (c == '[') {
                countStack.push(k);
                stringStack.push(currentString);
                // reset
                k = 0;
                currentString = "";
            }
            else if (c == ']') {
                int repeatTimes = countStack.top(); countStack.pop();
                string decoded = stringStack.top(); stringStack.pop();
                for (int i = 0; i < repeatTimes; i++) {
                    decoded += currentString;
                }
                currentString = decoded;
            }
            else {
                currentString += c;
            }
        }
        return currentString;
    }
};
