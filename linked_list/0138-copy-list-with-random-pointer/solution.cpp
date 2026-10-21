// 138. Copy List with Random Pointer
// https://leetcode.com/problems/copy-list-with-random-pointer/
// Difficulty: Medium | Runtime: 3 ms (beats 91.8%) | Memory: 15.4 MB (beats 9.4%)

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(head==nullptr) return nullptr;

        unordered_map<Node*,Node*> nodes;

        Node* newHead = new Node(head->val);
        nodes[head] = newHead;;

        Node* curr = head->next;
        Node* newCurr = newHead;

        while(curr!=nullptr && newCurr!=nullptr){
            Node* node = new Node(curr->val);
            nodes[curr]=node;

            newCurr->next = node;
            newCurr = newCurr->next;
            curr = curr->next;
        }

        curr=head;
        newCurr = newHead;

        while(curr!=nullptr && newCurr!=nullptr){
            if(curr->random!=nullptr){
                newCurr->random = nodes[curr->random];
            }
            curr = curr->next;
            newCurr = newCurr->next;
        }

        return newHead;
    }
};
