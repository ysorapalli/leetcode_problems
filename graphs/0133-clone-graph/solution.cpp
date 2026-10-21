// 133. Clone Graph
// https://leetcode.com/problems/clone-graph/
// Difficulty: Medium | Runtime: 3 ms (beats 68.7%) | Memory: 12.1 MB (beats 64.1%)

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        Node* head = node;

        if(head == nullptr)
            return nullptr;

        Node* res = new Node(head->val);
        queue<Node*> q;

        unordered_map<int,Node*> maps;

        q.push(head);

        while(!q.empty()){
            Node* curr = q.front();
            q.pop();

            Node* parent;

            if(maps.contains(curr->val))
                parent = maps[curr->val];
            else{
                parent = new Node(curr->val);
                maps.insert({curr->val, parent});
            }

            vector<Node*> neighs = curr->neighbors;

            for(Node* n: neighs){
                if(maps.contains(n->val)){
                    parent->neighbors.push_back(maps[n->val]);
                }
                else{
                    Node* neigh = new Node(n->val);
                    maps.insert({n->val, neigh});
                    parent->neighbors.push_back(neigh);
                    q.push(n);
                }
            }
        }

        return maps[head->val];

    }
};
