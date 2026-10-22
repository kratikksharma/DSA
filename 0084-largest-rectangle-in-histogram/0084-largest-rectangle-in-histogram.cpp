class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size(), ans = 0;
        vector<int> l(n), r(n);
        l[0] = -1;
        r[n - 1] = n;
        for (int i = 1; i < n; i++) {
            int j = i - 1;
            while (j >= 0 && h[j] >= h[i])
                j = l[j];
            l[i] = j;
        }
        for (int i = n - 2; i >= 0; i--) {
            int j = i + 1;
            while (j < n && h[j] >= h[i])
                j = r[j];
            r[i] = j;
        }
        for (int i = 0; i < n; i++)
            ans = max(ans, h[i] * (r[i] - l[i] - 1));
        return ans;
    }

};