/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head, *curr;
        head = curr = new ListNode(0);  // dumpy

        int carry = 0;
        while(l1 && l2)
        {
            int v = l1->val + l2->val + carry; 
            carry = v > 9 ?  1 : 0;
            v = v % 10;
            curr->next = new ListNode(v);
            curr = curr->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        while (l1)
        {
            int v = l1->val + carry;
            carry = v > 9 ?  1 : 0;
            v = v % 10;
            curr->next = new ListNode(v);
            curr = curr->next;
            l1 = l1->next;
        }
        while(l2)
        {
            int v = l2->val + carry;
            carry = v > 9 ?  1 : 0;
            v = v % 10;
            curr->next = new ListNode(v);
            curr = curr->next;
            l2 = l2->next;
        }
        if (carry)
        {
            curr->next = new ListNode(carry);
            curr = curr->next;
        }
        curr = head->next;
        delete head;
        return curr;
    }
};
// @lc code=end

