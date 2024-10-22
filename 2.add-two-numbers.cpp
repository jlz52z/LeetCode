// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem2.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */
#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
using namespace std;
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int ten = 0;
        int one = 0;
        ListNode* p = new ListNode();
        ListNode* Head = p;
       while(l1 != nullptr && l2 != nullptr) 
       {
        ListNode * l3 = new ListNode();
        one = (l1->val + l2->val) > 9 ? (l1->val + l2->val - 10) : (l1->val + l2->val);
        l3 -> val = (one + ten) % 10;
        ten = (l1->val + l2->val + ten) > 9 ? 1 : 0;
        p -> next = l3; 
        p = l3;
        l1 = l1 -> next;
        l2 = l2 -> next;
       }
       while (l1 != nullptr)
       {
        ListNode *l3 = new ListNode();
        l3 -> val = (l1 -> val + ten) % 10;
        ten = (l1 -> val + ten) / 10;
        p -> next = l3;
        p = l3;
        l1 = l1 -> next;
       }
       
       while (l2 != nullptr)
       {
        ListNode *l3 = new ListNode();
        l3 -> val = (l2 -> val + ten) % 10;
        ten = (l2 -> val + ten) / 10;
        p -> next = l3;
        p = l3;
        l2 = l2 -> next;
       }
       if(ten == 1)
       {
        ListNode *l3 = new ListNode(ten);
        p -> next = l3;
       }
     Head = Head->next;
     return Head;  
    }
};
// @lc code=end

