 @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem69.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
       if (x == 0) return 0;
        int begin = 1, end = x / 2;
        while (begin < end)
        {
            int mid = begin + ((end - begin) >> 1) ;
            if ((long long)mid * mid < x) begin = mid + 1;
            else end = mid ;
        }
        return end;
    }
};
// @lc code=end
//注意整数乘法可能存在溢出，需要转换成long long
//这里我第一次写用的是找下界的二分，这样是错的
//找下界的二分找的是（从左向右）大于等于target的第一个数，这里的target是根号x
//所以找到的数是int(根号x) + 1

//而正解用的是找上界的二分，找的是（从右往左）小于等于target的第一个数
//即int(根号x)