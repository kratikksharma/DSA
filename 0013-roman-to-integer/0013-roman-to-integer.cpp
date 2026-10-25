class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int ans = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'I') {
                if (ans >= 5)
                    ans -= 1;
                else
                    ans += 1;
            }
            else if (s[i] == 'V') {
                ans += 5;
            }
            else if (s[i] == 'X') {
                if (ans >= 50)
                    ans -= 10;
                else
                    ans += 10;
            }
            else if (s[i] == 'L') {
                ans += 50;
            }
            else if (s[i] == 'C') {
                if (ans >= 500)
                    ans -= 100;
                else
                    ans += 100;
            }
            else if (s[i] == 'D') {
                ans += 500;
            }
            else if (s[i] == 'M') {
                ans += 1000;
            }
        }

        return ans;
    }
};