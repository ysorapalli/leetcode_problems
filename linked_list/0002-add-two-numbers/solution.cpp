// 2. Add Two Numbers
// https://leetcode.com/problems/add-two-numbers/
// Difficulty: Medium | Runtime: 4 ms (beats 21.2%) | Memory: 77 MB (beats 92.8%)

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
        ListNode* sum = new ListNode();
        ListNode* head = sum;
        int total=0,carry=0,digit=0;

        while(l1 != nullptr && l2 != nullptr){
            total = l1->val + l2->val + carry;
            carry = total / 10;
            digit = total % 10;

            sum->next = new ListNode();
            sum->next->val = digit;
            sum = sum->next;

            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != nullptr){
            total = l1->val + carry;
            carry = total / 10;
            digit = total % 10;
            sum->next = new ListNode();
            sum->next->val = digit;
            sum = sum->next;

            l1 = l1->next;
        }
        while(l2 != nullptr){
            total = l2->val + carry;
            carry = total / 10;
            digit = total % 10;
            sum->next = new ListNode();
            sum->next->val = digit;
            sum = sum->next;

            l2 = l2->next;
        }
        if(carry){
            sum->next = new ListNode();
            sum->next->val = carry;
            sum = sum->next;
        }

        return head->next;
    }
};
