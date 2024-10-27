#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
using namespace std;
/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0;
        int result = 1000000;
        long long sum = 0;
        int len = 0;
        for(; j < nums.size(); j ++)
        {
            sum += nums[j];
            while(sum >= target)
            {
                len = j - i + 1;
                result = result < len ? result : len;
                sum -= nums[i++];
            }
        }
        return result == 1000000 ? 0 : result;

    }
};
// @lc code=end

