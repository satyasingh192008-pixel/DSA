class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> freq;
        for (int c : deck) freq[c]++;
        int g = 0;
        for (auto& [val, cnt] : freq)
            g = gcd(g, cnt);
        return g >= 2;
    }
};