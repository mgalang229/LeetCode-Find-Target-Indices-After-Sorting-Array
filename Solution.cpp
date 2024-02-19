class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> indices;
        for (int i = 0; i < nums.size(); i++) {
            if (target == nums[i]) {
                indices.push_back(i);
            }
        }
        return indices;
    }
};
