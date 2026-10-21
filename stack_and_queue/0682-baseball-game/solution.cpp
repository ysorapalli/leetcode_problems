// 682. Baseball Game
// https://leetcode.com/problems/baseball-game/
// Difficulty: Easy | Runtime: 4 ms (beats 4.5%) | Memory: 12.8 MB (beats 41.3%)

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> scores;
        int total = 0;
        int size = (int)operations.size();

        for(int i=0; i<size; i++){
            if(operations[i]=="C")
                scores.pop();
            else if(operations[i]=="D"){
                int top = scores.top();
                scores.push(top*2);
            }
            else if(operations[i]=="+"){
                int top1 = scores.top();
                scores.pop();
                int top2 = scores.top();
                scores.push(top1);
                scores.push(top1+top2);
            }
            else{
                scores.push(stoi(operations[i]));
            }
        }

        while(!scores.empty()){
            total+=scores.top();
            scores.pop();
        }

        return total;
    }
};
