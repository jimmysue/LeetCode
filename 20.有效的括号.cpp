/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include <stack>
using namespace std;
// @lc code=start
class Solution {
public:
    char pair(char c)
    {
        switch (c)
        {
        case ')':
            return '(';
        case '}':
            return '{';
        case ']':
            return '[';
        }
        return 0;   // make compiler happy!
    }
    bool isValid(string s) {
        stack<char>  quotes;

        for(auto c: s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                quotes.push(c);
            }
            else if (c == ')' || c == '}' || c == ']')
            {
                if (quotes.empty())
                {
                    return false;
                }
                auto p = pair(c);
                auto t = quotes.top();
                quotes.pop();
                if (p != t)
                {
                    return false;
                }
            }
            else
            {
                throw std::invalid_argument("invalid input");
            }
            
        }
        return quotes.empty();
    }
};
// @lc code=end

