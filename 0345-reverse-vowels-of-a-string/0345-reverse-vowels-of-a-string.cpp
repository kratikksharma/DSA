class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }
    void reverse(string& s, int left, int right) {
        if (left >= right) {
            return;
        }
        if (!isVowel(s[left])) {
            reverse(s, left + 1, right);
            return;
        }
        if (!isVowel(s[right])) {
            reverse(s, left, right - 1);
            return;
        }
        swap(s[left], s[right]);
        reverse(s, left + 1, right - 1);
    }
    string reverseVowels(string s) {
        reverse(s, 0, s.length() - 1);
        return s;
    }
};