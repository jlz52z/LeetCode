// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem35.h"

using namespace std;
// @before-stub-for-debug-end

#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
using namespace std;
/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int begin = 0, end = nums.size() - 1;
        while (begin < end)
        {
            int mid = begin + ((end - begin) >> 1);
            if(nums[mid] < target) begin = mid + 1;
            else end = mid;
        }
        if (target > nums[begin]) return begin + 1;
        else return begin;
        
    }
};
// @lc code=end
//需要注意，在循环结束之后，begin值可能并不等于mid值
//循环退出时，begin可以指向最后两个数之中的任意一个
//如(target,any)此时指向第一个
//(any,target) 此时指向第二个
//如果target在两数之间，那么begin指向第二个（但此时mid指向第一个）
