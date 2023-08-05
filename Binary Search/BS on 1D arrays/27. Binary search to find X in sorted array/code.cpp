class Solution {
public:
    // template for binary search
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size()-1;

        while(lo <= hi){
            // calc mid like below to avoid overflow
            int mid = lo + (hi-lo)/2;
            // mid is also calc as (may cause overflow):
            /* mid = (lo+hi)/2; */

            // target found
            if(nums[mid] == target){
                return mid;
            }
            // target in right subspace, eliminate left subspace
            else if(target > nums[mid]){
                lo = mid+1;
            }
            // target in left subspace, eliminate right subspace
            else{
                hi = mid-1;
            }
        }

        // target absent
        return -1;
    }
};
