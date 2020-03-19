/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
#include <exception>

class Solution {
public:
    int reverse(int x) {
        int v = 0;
        while(x)
        {
            auto y = x / 10;
            auto d = x - y * 10;
            x = y;
            if ((v > INT_MAX / 10) || (v < INT_MIN / 10))
            {
                return 0;
            }
            v = v * 10 + d;
        }
        return v;
    }
};
// @lc code=end

