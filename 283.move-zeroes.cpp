// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem283.h"

using namespace std;
// @before-stub-for-debug-end

#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
using namespace std;
/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 0 && nums.size() == 1) return;
        int i = 0;
        while(i < nums.size() && nums[i] != 0 ) 
            i++;
        int j = i + 1;
        while(j < nums.size() &&nums[j] == 0 ) 
            j++;
        for(; j < nums.size(); j++)
        {
            if (nums[j] == 0) continue;
            nums[i] = nums[j];
            nums[j] = 0;
            while(i < nums.size() &&nums[i] != 0 ) 
                i++;
        }


    }
};
// @lc code=end
// 别把 || 和 && 弄混了
// 以及还是注意在循环时（特别是while循环），数组越界的问题
