class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
                                ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                                "...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set<string> seen;

        for (const string& word : words) {
            string code;
            for (char c : word) {
                code += morse[c - 'a'];
            }
            seen.insert(code);
        }

        return seen.size();
    }
};