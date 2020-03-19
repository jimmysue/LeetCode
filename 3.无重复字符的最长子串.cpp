/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
#include <unordered_map>
#include <algorithm>
using std::unordered_map;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> pos;
        int len = 0;
        int start = -1;
        for (int  i = 0; i < s.size(); ++i)
        {
            auto c = s[i];
            auto p = pos.find(c);

            if (p == pos.end())
            {
                auto curr = i - start;
                len = std::max(curr, len);
            }
            else
            {
                auto curr = i - std::max(start, p->second);
                len = std::max(curr, len);
                start = std::max(start, p->second);
            }
            pos[c] = i;
        }
        return len;
    }
};
// @lc code=end

