// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem977.h"

using namespace std;
// @before-stub-for-debug-end

#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
using namespace std;
/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start

int binary_search(vector<int>& a)
{
    int i = 0, j = a.size() - 1;
    while(i < j)
    {
        int mid = i + ((j - i) >> 1);
        if(a[mid] < 0) i = mid + 1;
        else j = mid; 
    }
    return i;
}

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i, j;
        j = binary_search(nums);
        i = j - 1;
        vector<int> a;
        while(i >= 0 && j < nums.size() )
        {
            if(nums[i] * nums[i] < nums[j] * nums[j])
            {
                a.push_back(nums[i] * nums[i]);
                i--;
            }
            else
            {
                a.push_back(nums[j] * nums[j]);
                j++;
            }

        }
        while(i >= 0)
        {
            a.push_back(nums[i] * nums[i]);
            --i;
        }
        while(j < nums.size())
        {
            a.push_back(nums[j] * nums[j]);
            ++j;
        }
        return a;
    }
};
// @lc code=end

