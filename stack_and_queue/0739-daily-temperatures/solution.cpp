// 739. Daily Temperatures
// https://leetcode.com/problems/daily-temperatures/
// Difficulty: Medium | Runtime: 30 ms (beats 22.7%) | Memory: 111.9 MB (beats 6.2%)

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = (int)temperatures.size();
        stack<pair<int,int>> temps;
        vector<int> waits(size,0);

        if(size==0) return waits;

        temps.push({temperatures[0],0});

        for(int i=1; i<size; i++){
            auto temp = temps.top();

            while(temp.first<temperatures[i] && !temps.empty()){
                waits[temp.second] = i-temp.second;
                temps.pop();
                if(!temps.empty()) temp = temps.top();
            }
            temps.push({temperatures[i],i});
        }

        return waits;

    }
};
