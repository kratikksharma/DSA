class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0;
        int b=0;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] + nums[j] == target) {
                    a=i;
                    b=j;
                }
            }
        }
        return {a, b};
    }
};