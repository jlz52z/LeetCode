// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem1.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<pair<int,int>> sorted_array;
         int i = 0;
         for(auto it = nums.begin(); it != nums.end(); it ++)
         sorted_array.push_back({*it,i++});
         sort(sorted_array.begin(),sorted_array.end());
         vector<int> answer;
        for (int i = 0, j = nums.size() - 1 ; i < j; )
        {
            if(sorted_array[i].first + sorted_array[j].first > target)
            {
                --j;
            }
            else if (sorted_array[i].first + sorted_array[j].first < target)
            {
                ++i;
            }
            else 
            {
                answer.push_back(sorted_array[i].second);
                answer.push_back(sorted_array[j].second);
                return answer;
            }
        }
        return answer;
    }
};
// @lc code=end

