// 127. Word Ladder
// https://leetcode.com/problems/word-ladder/
// Difficulty: Hard | Runtime: 95 ms (beats 34.2%) | Memory: 19.6 MB (beats 94.0%)

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordSet(wordList.begin(), wordList.end());
        if (!wordSet.count(endWord)) return 0;

        queue<string> q;
        vector<char> letters;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            letters.push_back(ch);
        }

        int count = 1;

        q.push(beginWord);

        while(!q.empty()){
            int size = q.size();

            for(int s = 0; s<size; s++){
                int currCount = count;

                string word = q.front();
                q.pop();

                int len = word.length();

                for(int i = 0; i<len; i++){
                    for(int j=0; j<26; j++){
                        string changed = word;
                        char currChar = word[i];
                        if(currChar == letters[j]) continue;
                        changed[i] = letters[j];
                        if(changed == endWord)
                            return currCount + 1;
                        if(changed!=word && wordSet.contains(changed)){
                            q.push(changed);
                            wordSet.erase(changed);
                        }
                    }
                }

            }
            if(!q.empty()) count++;
        }
        return 0;
    }
};
