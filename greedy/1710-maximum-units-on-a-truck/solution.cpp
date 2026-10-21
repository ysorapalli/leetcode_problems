// 1710. Maximum Units on a Truck
// https://leetcode.com/problems/maximum-units-on-a-truck/
// Difficulty: Easy | Runtime: 4 ms (beats 51.1%) | Memory: 19.7 MB (beats 89.2%)

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](auto& a, auto& b){
            return a[1]>b[1];
        });

        int size = (int)boxTypes.size();
        int max = 0;

        for(int i=0; i<size; i++){
            if(truckSize==0) break;

            if(boxTypes[i][0]<=truckSize){
                max = max + (boxTypes[i][0]*boxTypes[i][1]);
                truckSize = truckSize - boxTypes[i][0];
            }
            else{
                max = max + (boxTypes[i][1]*truckSize);
                break;
            }
        }

        return max;
    }
};
