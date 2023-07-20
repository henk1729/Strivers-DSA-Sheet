class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1) return 1;

        int lo = 0, hi = 0, n = nums.size();
        while(hi < n){
            nums[lo] = nums[hi];
            hi++;
            while(hi < n && nums[hi] == nums[hi-1]) hi++;
            lo++;
        }

        return lo;
    }
};
