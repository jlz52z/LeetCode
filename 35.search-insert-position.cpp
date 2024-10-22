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

