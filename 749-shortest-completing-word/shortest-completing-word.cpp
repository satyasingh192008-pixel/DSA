class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        
        int need[26] = {0};

        // Count letters in licensePlate
        for (char c : licensePlate) {
            if (isalpha(c)) {
                c = tolower(c);
                need[c - 'a']++;
            }
        }

        string answer = "";
        for (string word : words) {
            
            int count[26] = {0};

            for (char c : word) {
                count[c - 'a']++;
            }

            bool complete = true;
            for (int i = 0; i < 26; i++) {
                if (count[i] < need[i]) {
                    complete = false;
                    break;
                }
            }
            if (complete) {
                if (answer == "" || word.length() < answer.length()) {
                    answer = word;
                }
            }
        }

        return answer;
    }
};