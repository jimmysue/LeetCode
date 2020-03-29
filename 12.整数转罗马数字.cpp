/*
 * @lc app=leetcode.cn id=12 lang=cpp
 *
 * [12] 整数转罗马数字
 */

// @lc code=start
#include <unordered_map>
#include <string>
using namespace std;

const char C[] = "IVXLCDM";
int D[] = {1, 5, 10, 50, 100, 500, 1000};
const char CI[] = "IXCM";
const char CV[] = "VLD";
const char CX[] = "XCM";
class Solution {

public:
    string intToRoman(int num) {
        int curr = 0; 
        string res = "";
        while (num)
        {
            int d = num % 10;

            if (d < 4)
            {
                res = string(d, CI[curr]) + res;
            }
            else if (d == 4)
            {
                res = string(1, CI[curr]) + CV[curr] + res;
            }
            else if (d == 5)
            {
                res = CV[curr] + res;
            }
            else if (d == 9)
            {
                res = string(1, CI[curr]) + CX[curr] + res;
            }
            else
            {
                res = string(1, CV[curr]) + string(d-5, CI[curr]) + res;
            }
            num /= 10;
            curr ++;
        }
        return res;
    }
};
// @lc code=end

