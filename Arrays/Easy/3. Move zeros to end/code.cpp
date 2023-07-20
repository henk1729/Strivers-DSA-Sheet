class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lo = 0, hi = 0, n = nums.size();
        while(hi < n){
            while(hi < n && nums[hi] == 0){
                hi++;
            }
            if(hi == n) break;
            nums[lo] = nums[hi];
            lo++;
            hi++;
        }
        while(lo < n){
            nums[lo] = 0;
            lo++;
        }
    }
};
