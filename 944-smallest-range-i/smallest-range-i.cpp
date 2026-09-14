class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
      sort(nums.begin(),nums.end());
      int n=nums.size()-1;
      int mn=nums[0];
      int mx=nums[n] ;
      return max(0,mx-mn-2*k); 
    }
};