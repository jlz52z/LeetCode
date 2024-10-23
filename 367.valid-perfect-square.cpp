#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
using namespace std;
/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long  begin = 1, end = num / 2;
        while (begin < end)
        {
            long long mid = begin + ((end - begin) >> 1);
            if((long long)mid  < num / mid) begin = mid + 1;
            else end = mid;
        }
        
        return begin * begin == num  ;
    }
};
// @lc code=end
//注意int乘法溢出的问题
