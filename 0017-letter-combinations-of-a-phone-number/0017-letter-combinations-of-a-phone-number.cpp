class Solution {
public:
    vector<string> ans;
    string temp = "";
    string arr[10] = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };
    void solve(string digits, int index) {
        if(index == digits.length()) {
            ans.push_back(temp);
            return;
        }
        int num = digits[index] - '0';
        string letters = arr[num];
        for(int i = 0; i < letters.length(); i++) {
            temp.push_back(letters[i]);
            solve(digits, index + 1);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0) {
            return ans;
        }
        solve(digits, 0);
        return ans;
    }
};
