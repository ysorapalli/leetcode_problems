// 950. Reveal Cards In Increasing Order
// https://leetcode.com/problems/reveal-cards-in-increasing-order/
// Difficulty: Medium | Runtime: 0 ms (beats 100.0%) | Memory: 13.3 MB (beats 7.2%)

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> q;
        vector<int> ans(deck.size(), 0);

        sort(deck.begin(), deck.end());

        for(int x : deck){
            q.push(x);
        }

        unordered_map<int,int> ref;
        int idx = 0;

        while(!q.empty()){
            ref[q.front()] = idx++;
            q.pop();
            if(q.empty()) break;
            q.push(q.front());
            q.pop();
        }

        for(int i=0; i<deck.size(); i++){
            ans[i] = deck[ref[deck[i]]];
        }

        return ans;
    }
};
