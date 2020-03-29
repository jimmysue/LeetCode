/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

#include <algorithm>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    int next(vector<int>& nums, int i)
    {
        int j = i + 1;
        while(j < nums.size())
        {
            if (nums[j] == nums[i])
            {
                ++j;
            }
            else
            {
                break;
            } 
        }
        return j;
    }

    int prev(vector<int>& nums, int i)
    {
        int j = i - 1;
        while(j >= 0)
        {
            if (nums[j] == nums[i])
            {
                --j;
            }
            else
            {
                break;
            } 
        }
        return j;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(begin(nums), end(nums));
        vector<vector<int>> res;
        for (auto i = 0; i < nums.size(); i = next(nums, i))
        {
            for (auto j = i + 1; j < nums.size() - 1; j = next(nums, j))
            {
                int target = 0 - nums[i] - nums[j];

                auto found = std::binary_search(nums.begin()+1+j, nums.end(), target);
                if (found)
                {
                    res.push_back({nums[i], nums[j], target});
                }
            }
        }
        return res;
    }
};
// @lc code=end

