#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
using namespace std;
/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0) return 0;
        int i, j;
        for(i = 0, j = nums.size(); i != j; i ++)
        {
            if (nums[i] == val)
            {
                while(nums[--j] == val)
                {
                    if(j == i) return i;
                }
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
        return i;

    }
};
// @lc code=end
// 还是要注意边界条件，例如这里我没有想到j会一直减小至负数的情况
//for循环内部的循环也应该检查for循环的退出条件
//内部循环在检查自己退出条件的同时，也应该检查外部循环的退出条件（？
