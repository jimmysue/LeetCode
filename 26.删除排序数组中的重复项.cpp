/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */
#include <functional>
#include <algorithm>
#include <vector>

using namespace std;
// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
        {
            return 0;
        }
        auto curr = begin(nums);
        auto iter = begin(nums);
        for (; iter != nums.end(); ++iter)
        {
            if (iter != curr && *iter != *curr)
            {
                curr++;
                *curr = *iter;
            } 
        }
        if (curr != nums.end())
        {
            curr++;
        }
        nums.erase(curr, nums.end());
        return nums.size();
    }
};
// @lc code=end

