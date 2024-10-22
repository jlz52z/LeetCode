// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem704.h"

using namespace std;
// @before-stub-for-debug-end

#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
using namespace std;
/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin = 0, end = nums.size() - 1;
        while (begin < end)
        {
            int mid = end - (end - begin) / 2 - 1; 
            if (nums[mid] < target) begin = mid + 1;
            else end = mid;
        }
        if (target == nums[begin]) return begin;
        else return -1;
    }
};
// @lc code=end
//注意边界条件，防止死循环
//注意+的优先级要高于 >> 所以要加上括号
