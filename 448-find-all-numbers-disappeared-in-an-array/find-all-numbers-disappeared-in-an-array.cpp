class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            while(nums[i] != nums[nums[i]-1]) {
                int idx = nums[i] - 1;
                swap(nums[i], nums[idx]);
            }
        }
        for(int i = 0; i < n; i++) {
            if(nums[i] != i + 1) {
                res.push_back(i+1);
            }
        }
        return res;
    }
};