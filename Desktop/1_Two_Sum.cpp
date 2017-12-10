class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> indices;
        for (int i = 0; i < nums.size(); i++) {
            indices[nums[i]] = i;
        }
        
        for (int i = 0; i < indices.size(); i++) {
            int left = target - nums[i];
            if (indices.count(left) && indices[left] != i) {
                return {i, indices[left]};
            }
        }
        return {};
    }
};