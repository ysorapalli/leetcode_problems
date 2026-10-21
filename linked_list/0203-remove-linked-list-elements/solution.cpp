// 203. Remove Linked List Elements
// https://leetcode.com/problems/remove-linked-list-elements/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 20 MB (beats 90.8%)

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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;

        while(head!=nullptr && head->val == val){
            head = head->next;
            curr = head;
        }

        while(curr!=nullptr && curr->next!=nullptr){
            if(curr->next->val == val)
                curr->next=curr->next->next;
            else
                curr=curr->next;
        }

        return head;
    }
};
