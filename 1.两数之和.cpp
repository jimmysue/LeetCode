/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include <map>
#include <unordered_map>
#include <vector>
using std::map;
using std::unordered_map;
using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> visited;

        for(auto i = 0; i < nums.size(); ++i)
        {
            auto v1 = nums[i];
            auto v2 = target - v1;
            auto pos = visited.find(v2);
            if (pos != visited.end())
            {
                return vector<int>{pos->second, i};
            }
            visited[v1] = i;
        }

        return {}; // make compiler happy
    }
};
// @lc code=end

