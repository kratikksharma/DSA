class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        for (int i = 0; i < n; i++) {
            if (haystack[i] == needle[0]) {
                int count=0;
                for (int j = 0; j < m; j++) {
                    if (haystack[i + j] != needle[j]) {
                        break;
                    }
                    count++;
                }
                if (count == m) {
                    return i;
                }
            }
        }
        return -1;
    }
};