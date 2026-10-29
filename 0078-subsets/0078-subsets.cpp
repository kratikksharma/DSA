class Solution {
public:
    void subset(vector<int>& nums, int idx, vector<int> curr,vector<vector<int>>& ans) {
        if (idx == nums.size()) {
            ans.push_back(curr);
            return;
        }
        subset(nums, idx + 1, curr, ans);
        curr.push_back(nums[idx]);
        subset(nums, idx + 1, curr, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        subset(nums, 0, curr, ans);
        return ans;
    }
};