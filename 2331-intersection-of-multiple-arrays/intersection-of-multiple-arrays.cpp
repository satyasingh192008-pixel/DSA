class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int> freq;
        int n = nums.size();
        
        for (auto &arr : nums) {
            for (int x : arr) {
                freq[x]++;
            }
        }
        
        vector<int> result;
        for (auto &p : freq) {
            if (p.second == n) {
                result.push_back(p.first);
            }
        }
        
        sort(result.begin(), result.end());
        return result;
    }
};