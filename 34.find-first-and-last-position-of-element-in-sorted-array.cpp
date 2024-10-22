#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
using namespace std;
/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0)
        return vector<int> {-1,-1};
        int begin = 0, end = nums.size() - 1;
        vector<int> result;
        //寻找下界
        while(begin < end)
        {
            int mid = begin + ((end - begin) >> 1);
            if(nums[mid] < target) begin = mid + 1;
            else end = mid;
        }
        if (target != nums[begin]) 
        {
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }
        int down = begin;
        result.push_back(down);
        begin = 0;
        end = nums.size() - 1;
        //寻找上界
        while(begin < end)
        {
            int mid = begin + ((end - begin) >> 1) + 1;
            if(target >= nums[mid]) begin = mid;
            else end = mid - 1;
        }
        result.push_back(begin);
        return result;
    }
};
// @lc code=end
//注意特判数组为空的情况
//这里寻找上下界可以这样理解：
//寻找下界时，范围为(begin, end], begin（及之前）小于 target
//所以寻找的是大于“begin”的第一个数，这里的begin指的是target之前的那个数
//即寻找target的下界

//寻找上界时，范围为[begin, end), end（及之后）大于 target
//所以寻找的是小于“end”的第一个数，这里的end指的是target之后的那个数
//即寻找target的上界
