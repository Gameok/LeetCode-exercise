/*
方法：暴力破解，循环两次数组
时间复杂度：O(n^2)
耗时：186ms
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; //若找不到符合条件的元素则返回空vector
    }
};
