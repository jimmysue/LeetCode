/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        auto i = 0;
        auto j = height.size() - 1;

        while(i < j)
        {
            int area = std::min(height[i], height[j]) * (j - i);
            res = std::max(area, res);
            if (height[i] > height[j])
            {
                --j;
            }
            else
            {
                ++i;
            }
        }
        return res;
    }
};
// @lc code=end

