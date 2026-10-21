// 160. Intersection of Two Linked Lists
// https://leetcode.com/problems/intersection-of-two-linked-lists/
// Difficulty: Easy | Runtime: 75 ms (beats 14.0%) | Memory: 28.8 MB (beats 9.7%)

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> visited;

        ListNode* current = headA;
        while(current!=nullptr){
            visited.insert(current);
            current=current->next;
        }

        current = headB;
        while(current!=nullptr){
            auto it = visited.find(current);
            if(it != visited.end()) return current;
            else current = current->next;
        }

        return nullptr;
    }
};
