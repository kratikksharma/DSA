class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void solve(vector<int>& nums, vector<int>& vis) {
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (vis[i] == 0) {
                temp.push_back(nums[i]);
                vis[i] = 1;
                solve(nums, vis);
                temp.pop_back();
                vis[i] = 0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> vis(nums.size(), 0);
        solve(nums, vis);
        return ans;
    }
};