// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem844.h"

using namespace std;
// @before-stub-for-debug-end

#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
using namespace std;
/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */

// @lc code=start

void processStr(string &s)
{
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '#')
        {
            j = i - 1;
            while(j >= 0 && s[j] == '.') --j;
            if (j >= 0)
            s[j] = '.';
            s[i] = '.';
        }
    }
}

class Solution {
public:
    bool backspaceCompare(string s, string t) {
            processStr(s), processStr(t);
            int i, j;
            for(i = 0, j = 0; i < s.size() && j < t.size(); i++, j++)
            {
                while (s[i] == '.' && i < s.size()) 
                    i++;
                while (j < t.size() && t[j] == '.') {
                    cout << j <<endl <<t.size();
                    j++;
                    }
                if(i < s.size() && j < t.size())
                {
                    if(s[i] != t[j]) return false;
                }
                if(i >= s.size() || j >= t.size())
                    break;

            }
                if(i >= s.size() && j >= t.size())
                {
                    return true;
                }
                if(i >= s.size())
                {
                    for(; j < t.size(); j++)
                    {
                        if (t[j] != '.') return false;
                    }
                }
                if(j >= t.size())
                {
                    for(; i < s.size(); i++)
                    {
                        if (s[i] != '.') return false;
                    }
                }
                return true;
    }
};
// @lc code=end
//官方题解使用栈来解决，确实巧妙
