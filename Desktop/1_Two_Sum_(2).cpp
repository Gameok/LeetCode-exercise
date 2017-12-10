/*
方法：哈希表
耗时：6ms
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> indices;   //初始化哈希表
        for (int i = 0; i < nums.size(); i++) {     //遍历数组，将数组索引存储到哈希表中
            indices[nums[i]] = i;
        }
        
        for (int i = 0; i < indices.size(); i++) {  //遍历哈希表
            int left = target - nums[i];    //若找到nums[i]，则找一个值left，让left和nums[i]的和为target
            if (indices.count(left) && indices[left] != i) {    
                                    //indices.count(left)表示存在这样一个left值，indices[left] != i表示数组中的元素不可重复使用
                return {i, indices[left]};
                                    //若找到满足条件的两个元素，就返回他们的下标
            }
        }
        return {};  //若找不到满足条件的两个元素，就返回一个空的vector
    }
};
