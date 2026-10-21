// 206. Reverse Linked List
// https://leetcode.com/problems/reverse-linked-list/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 13.4 MB (beats 38.0%)

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
    ListNode* calc(ListNode* prev, ListNode* curr){
        if(curr == nullptr) return prev;

        ListNode* nextNode = curr->next;
        curr->next = prev;

        return calc(curr, nextNode);
    }
    ListNode* reverseList(ListNode* head) {
        return calc(nullptr, head);
    }
};
