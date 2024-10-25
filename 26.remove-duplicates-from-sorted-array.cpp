#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
using namespace std;
/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int i = 0, j = 1;
        for (; j < nums.size(); j++)
        {
            if(nums[j] != nums[j - 1])
            {
                nums[++i] = nums[j];
            }
        }
        return i + 1;
    }
};
// @lc code=end

