class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s;

        for (int x : nums) {
            s.insert(x);
        }

        int ans = k;

        while (s.find(ans) != s.end()) {
            ans += k;
        }

        return ans;
    }
};