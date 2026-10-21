// 19. Remove Nth Node From End of List
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Difficulty: Medium | Runtime: 0 ms (beats 100.0%) | Memory: 14.8 MB (beats 90.6%)

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        int i = 0;

        while(curr != nullptr){
            curr = curr->next;
            i++;
        }

        int j = 0;
        curr = head;

        while(curr != nullptr){
            if(j == i-n){
                curr = curr->next;
                if(prev != nullptr)
                    prev->next = curr;

                if(j==0) return curr;

                return head;
            }

            prev = curr;
            curr = curr->next;
            j++;
        }

        return head;
    }
};
