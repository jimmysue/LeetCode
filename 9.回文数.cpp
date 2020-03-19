/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start

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

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
        {
            return false;
        }
        return reverse(x) == x;
    }
};
// @lc code=end

