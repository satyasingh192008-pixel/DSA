class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> mp;
        for (int x : deck) {
            mp[x]++;
        }
        int x = 0;
        for (auto p : mp) {
            x = gcd(x, p.second);
        }
        return x >= 2;
    }
};