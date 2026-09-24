class Solution {
public:
    bool canJump(vector<int>& n) {
        int l = n.size();
        int j = 1;
        for(int i = l - 2; i >= 0; i--) {
            if(n[i] >= j) {
                j = 1;
            }
            else {
                j++;
            }
        }
        return j == 1;
    }
};