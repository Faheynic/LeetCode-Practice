class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /* Loops through array, during each iteration checks if current
            index + next index equals the target. if so return said indices */
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i+1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        // if no indices combine to make target return no indices
        return {};
    }
};