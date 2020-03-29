/*
 * @lc app=leetcode.cn id=307 lang=cpp
 *
 * [307] 区域和检索 - 数组可修改
 */
#include <algorithm>
using namespace std;
// @lc code=start
class NumArray {
public:
    NumArray(vector<int>& nums) 
        : nums_(nums), increment_(nums.size(), 0)
    {
        for (int i = 0; i < nums.size(); ++i)
        {
            
        }
    }
    
    void update(int i, int val) {
        nums_[i] = val;
    }
    
    int sumRange(int i, int j) {
        int sum = 0;
        for (; i <= j; ++i)
        {
            sum += nums_[i];
        }
        return sum;
    }
    vector<int>& nums_;
    vector<int>& increment_;
    map<int, int> edition_;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */
// @lc code=end

