/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
#include <string>
#include <vector>

using namespace std;
//                 I  V   X  L   C     D    M
const int   N[] = {1, 5, 10, 50, 100, 500, 1000};
const int   D[] = {-1,0, 0,  2,  2,   4,   4 };
inline int char2index(char c)
{
    switch (c)
    {
    case 'I': return 0;
    case 'V': return 1;
    case 'X': return 2;
    case 'L': return 3;
    case 'C': return 4;
    case 'D': return 5;
    case 'M': return 6;
    default:
        break;
    }
    return 0;
}

class Solution {
public:
    int romanToInt(string s) {
        int v = 0;

        int last = 6;

        for (auto c: s)
        {
            int index = char2index(c);
            if (D[index] == last)
            {
                v += - 2 * N[D[index]] + N[index];
            }
            else
            {
                v += N[index];
            }
            last = index;
        }
        return v;
    }
};
// @lc code=end

