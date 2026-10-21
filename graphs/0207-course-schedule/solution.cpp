// 207. Course Schedule
// https://leetcode.com/problems/course-schedule/
// Difficulty: Medium | Runtime: 3 ms (beats 77.6%) | Memory: 20.1 MB (beats 34.9%)

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prs) {
        vector<vector<int>> adj(numCourses);
        vector<int> ins(numCourses,0);

        queue<int> q;
        int count = 0;

        for(vector<int> p: prs){
            adj[p[1]].push_back(p[0]);
            ins[p[0]]++;
        }

        for(int i =0; i<numCourses; i++){
            if(ins[i] == 0)
                q.push(i);
        }

        while(!q.empty()){
            int curr = q.front();
            q.pop();
            count++;

            for(int a : adj[curr]){
                ins[a]--;

                if(ins[a] == 0)
                    q.push(a);
            }
        }

        return count == numCourses;
    }
};
